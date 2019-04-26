function [ Y ] = classifyArmEMG1ch( rawData, F, nF )
b = [0.777246521400202,-0.295149620198606,2.36909935327861,-0.591875563889248,2.36909935327861,-0.295149620198606,0.777246521400202];
a = [1,-0.348004594825511,2.53911455972459,-0.585595129484226,2.14946749012577,-0.248575079976725,0.604109699507276];
% 2Hz High Pass:
b1 = [0.950971887923409,-2.85291566377023,2.85291566377023,-0.950971887923409];
a1 = [1,-2.89947959461186,2.80394797738300,-0.904347531392409];
dWF0 = zeros(size(rawData,1), 3);
sigRMS = zeros(1,250);
sigRMSIntegral = zeros(1,1);
RMS = sigRMSIntegral;
MAX = RMS;
FILT_FULL = filtfilt(b,a,rawData(:,1:1));
FILT_FULL = filtfilt(b1,a1,FILT_FULL);
PSD = zeros(1, 125);
hW = hannWin(250);
i=1;
j=1;

dWF(:,i) = FILT_FULL(end-374:end-125,i); 
sigRMS(i,:) = sig_rms_pad_fixed(dWF(:,i),10,9);
sigRMSIntegral(i,j) = trapz(sigRMS(i,:));
RMS(i,j) = rms(dWF(:,i));
MAX(i,j) = max(dWF(:,i));
[PSD(j,:), f] = welch_psd(dWF(:,i), 250, hW);
[M(j), L] = max(PSD(j,:));
PSDLOC(j) = f(L);
dX = [RMS',sigRMSIntegral',MAX',M,PSDLOC];
% F_recon = reshape(F,[length(F)/(128+1), (128+1)]);
Y = knn(dX,F(:,1:nF),F(:,nF+1),5);


end

