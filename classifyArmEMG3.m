%%classifyArmEMG
function [ Y ] = classifyArmEMG3( dW,F,PLOT_DATA ) %, RMS, COMBMAX, sigRMSIntegral 
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
MAX = max(dWF);
dX = [RMS, sigRMSIntegral, MAX];

THRESHOLD_MIN = 1.0E-4;%1.5E-4;

% 2. Is that threshold exceeded?
% if (RMS(1) > THRESHOLD_MIN || RMS(2) > THRESHOLD_MIN || RMS(3) > THRESHOLD_MIN)
    Y = knn(dX,F(:,1:9), F(:,10), 3);
% end

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

