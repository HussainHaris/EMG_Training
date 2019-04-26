function [ F, nF ] = ctrainingRoutine1ch( inputData, PLOTDATA )
% Inputs:
% dW = data array : [2 x 15000]
% Outputs
% P = [11 x 1] Contains double size parameters
% .Index..,1....2....3....4....5....6....7..%

% NUM_CH = 1;
b = [0.777246521400202,-0.295149620198606,2.36909935327861,-0.591875563889248,2.36909935327861,-0.295149620198606,0.777246521400202];
a = [1,-0.348004594825511,2.53911455972459,-0.585595129484226,2.14946749012577,-0.248575079976725,0.604109699507276];
% 2Hz High Pass:
b1 = [0.950971887923409,-2.85291566377023,2.85291566377023,-0.950971887923409];
a1 = [1,-2.89947959461186,2.80394797738300,-0.904347531392409];
%[10 90 bandpass]
% b1 = [0.300300000000000,0,-0.900800000000000,0,0.900800000000000,0,-0.300300000000000];
% a1 = [1,-1.26310000000000,-0.181800000000000,0.230300000000000,0.492600000000000,-0.147200000000000,-0.0843000000000000];
wStart = 1:30:(15000-250);
%Other var decs:
dWF = zeros(250,1);
sigRMS = zeros(1,250);
sigRMSIntegral = zeros(1,length(wStart));
RMS = sigRMSIntegral;
MAX = RMS;
CLASS = zeros(1,length(wStart));
CLASS = uint8(CLASS);
CLASS_INPUT_DATA = uint8(inputData(:,2));

FILT_FULL = filtfilt(b,a,inputData(:,1:1));
FILT_FULL = filtfilt(b1,a1,FILT_FULL);
PSD = zeros(length(wStart), 125);
hW = hannWin(250);
i=1;
% figure(10); 
% subplot(3,1,1);title('Forearm EMG Filtered Signal - Channel 1'); plot(FILT_FULL(:,1));xlabel('Samples, 250Hz Sample Rate'); ylabel('Voltage V');
% for i = 1:1
    %select chunk of 250:
    for j = 1:length(wStart)
        dWF(:,i) = FILT_FULL(wStart(j):wStart(j)+249,i);
        sigRMS(j,:) = sig_rms_pad_fixed(dWF(:,i),10,9);
        sigRMSIntegral(i,j) = trapz(sigRMS(j,:));
%         waveletCoef = cwt_haar(dWF(:,i));
%         Scalogram = abs(waveletCoef.*waveletCoef);
%         E(j) = sum(Scalogram(:));
        RMS(i,j) = rms(dWF(:,i));
        MAX(i,j) = max(dWF(:,i));
%         FFT(j,:) = fft(dWF(:,i));
%         P2 = abs(FFT(j,:))/length(FFT(j,:));
%         P1(j,:) = P2(1:length(FFT(j,:))/2+1);
%         P1(j,2:end-1) = 2*P1(j,2:end-1);
        if(PLOTDATA)
            [PSD(j,:), f] = welch_psd(dWF(:,i), 250, hW);
        else
            [PSD(j,:), ~] = welch_psd(dWF(:,i), 250, hW);
        end
        % original line
        CLASS(j) = mode(inputData(wStart(j):wStart(j)+249));
%         CLASS(j) = uint8(mode(CLASS_INPUT_DATA(wStart(j):wStart(j)+249)));
        if(PLOTDATA)
            plot_style = {'k','r','m','c','k','g','b'};
            figure(29); %hold on;
            subplot(2,1,1);
            plot(f,PSD(j,:), plot_style{CLASS(j)+1});ylim([0 1E-6]);xlim([0 125])
            subplot(2,1,2);
            plot(dWF(:,i));ylim([-0.02 0.02])
            iaf = input('input? \n'); commandwindow;
        end
    end
% end
F = [RMS',sigRMSIntegral',MAX',PSD,CLASS(:)];
% F = [RMS',sigRMSIntegral',MAX',E',P1,CLASS(:)];
nF = size(F,2)-1;
F = F(:)';

end

