%%classifyArmEMG
function [ Y, F ] = classifyArmEMG2( dW,LastY,PARAMS,PLOT_DATA ) %, RMS, COMBMAX, sigRMSIntegral 
Y = 0;
% Wn = [55. 65]*2/Fs;
% [b,a] = butter(3, Wn, 'stop');
% Wn2 = (2)*2/Fs; %high pass:
% [b1,a1] = butter(3, Wn2, 'high');
b = [0.777246521400202,-0.295149620198606,2.36909935327861,-0.591875563889248,2.36909935327861,-0.295149620198606,0.777246521400202];
a = [1,-0.348004594825511,2.53911455972459,-0.585595129484226,2.14946749012577,-0.248575079976725,0.604109699507276];
% 2Hz High Pass:
b1 = [0.950971887923409,-2.85291566377023,2.85291566377023,-0.950971887923409];
a1 = [1,-2.89947959461186,2.80394797738300,-0.904347531392409];
% LAST 1s / 6s
dWF0 = zeros(size(dW,1), 3);
dWF = zeros(250, 3);
sigRMS = zeros(3, 250);
sigRMSIntegral = zeros(1,3);
RMS = zeros(1,3);
for i = 1:3
    dWF0(:,i) = filtfilt(b,a,dW(:,i));
    dWF0(:,i) = filtfilt(b1,a1,dWF0(:,i));
%     dWF(:,i) = dWF0(end-249:end,i);
    dWF(:,i) = dWF0(end-374:end-125,i); 
    % Feature Extraction
    sigRMS(i,:) = sig_rms_pad_fixed(dWF(:,i), 10, 9);
    sigRMSIntegral(i) = trapz(sigRMS(i,:));
    RMS(i) = rms(dWF(:,i));
end

if LastY == 1
    if(sigRMSIntegral(1) > PARAMS(2))%0.035
        %Check for Ripple
        Y = 1;%hand still closed
    else
        Y = 0;
    end
elseif LastY == 7 || LastY == 4
    if RMS(3) >= PARAMS(3)
        Y = LastY;
    else
        Y = 0;
    end
elseif LastY == 6 || LastY == 5 || LastY == 3
    if RMS(1) >= PARAMS(4)
        Y = LastY;
    else 
        Y = 0;
    end
else
    Y = 0;
end

MAX = max(dWF);

F = [RMS, MAX, sigRMSIntegral]; F = F(:); 
%Analysis: 
TH_MAX_CLASS_1 = PARAMS(5); %+/- 2E-3
if (MAX(1) > TH_MAX_CLASS_1) &&(MAX(2) > TH_MAX_CLASS_1) &&(MAX(3) > TH_MAX_CLASS_1)
   Y = 1;
end

% 1. Set minimum threshold for activity:
THRESHOLD_MIN = PARAMS(1);%1.5E-4;
% 2. Is that threshold exceeded?
THR_EXC = RMS(1) > THRESHOLD_MIN || RMS(2) > THRESHOLD_MIN || RMS(3) > THRESHOLD_MIN;
% 3. checks to see if rms(ch3) > ch2 and ch1; also checks RMS(ch3) > 3E-4
B7_4_C1 = RMS(3) > RMS(1) && RMS(3) > RMS(2) && RMS(3) > PARAMS(6);
% 4. a large gap between rms(ch3) and rms(ch1) means it is pinky
B7 = RMS(3) - RMS(1) > PARAMS(7);
% 5. ch1>3>2 ? 6
B6 = RMS(1) > RMS(3) && RMS(3) > RMS(2);
% 6. ch1>2>3 with a small gap between 1 and 3 ? 5
B5 = RMS(2) > RMS(3) && (RMS(1)-RMS(3)) < PARAMS(8); %%RMS(1) > RMS(2) && 
% 7. small gap between 1 and 2, RMS(1) is < 0.3mV
B4 = (RMS(1) - RMS(2)) < PARAMS(9) && RMS(1) < PARAMS(10);
% 8. ch1>ch2, and MAX(3) > 0.7mV
B3 = RMS(1) > RMS(2) && MAX(3) < PARAMS(11) ;

if(Y==0 && THR_EXC)
    %digit classification. 
    if( B7_4_C1 ) % can be 7 or 4
        if( B7 )
            Y = 7;
        else
            Y = 4;
        end
    elseif ( B6 )
        Y = 6;
    elseif ( B5 )
        Y = 5;
    elseif B4
        Y = 4;
    elseif B3
        Y = 3; 
    else
        Y = 0;
    end
end

if(PLOT_DATA)
    figure(1); 
    for i=1:3
        subplot(3,1,i);
        plot(dWF(:,i)),ylim([-1E-2,1E-2]);hold on;
        plot(sigRMS(i,:)); 
        hold off;
    end
end
end