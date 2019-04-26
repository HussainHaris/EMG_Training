function [ F ] = ctrainingRoutineKNN( dW , PD)
%%
% Inputs:
% dW = data array : [4 x 30000]
% Outputs
% P = [11 x 1] Contains double size parameters
% .Index..,1....2....3....4....5....6....7..%
b = [0.777246521400202,-0.295149620198606,2.36909935327861,-0.591875563889248,2.36909935327861,-0.295149620198606,0.777246521400202];
a = [1,-0.348004594825511,2.53911455972459,-0.585595129484226,2.14946749012577,-0.248575079976725,0.604109699507276];
% 2Hz High Pass:
b1 = [0.950971887923409,-2.85291566377023,2.85291566377023,-0.950971887923409];
a1 = [1,-2.89947959461186,2.80394797738300,-0.904347531392409];

%window separation
wStart = 1:60:30000-250;
%Other var decs:
dWF = zeros(250,3);
sigRMS = zeros(3,250);
sigRMSIntegral = zeros(3,length(wStart));
RMS = sigRMSIntegral;
MAX = RMS;
CLASS = zeros(1,length(wStart));
% average out data from "0" class 
% FILT ENTIRE SIG?:
FILT_FULL = filtfilt(b,a,dW(:,1:3));
FILT_FULL = filtfilt(b1,a1,FILT_FULL);
for i = 1:3
    %select chunk of 250:
    for j = 1:length(wStart)
        dWF(:,i) = FILT_FULL(wStart(j):wStart(j)+249,i);
        sigRMS(i,:) = sig_rms_pad_fixed(dWF(:,i),10,9);
        sigRMSIntegral(i,j) = trapz(sigRMS(i,:));
        RMS(i,j) = rms(dWF(:,i));
        MAX(i,j) = max(dWF(:,i));
%         [a,h,v,d] = haart2(dWF(:,i));
        CLASS(j) = mode(dW(wStart(j):wStart(j)+249,4));
    end
end
if(PD)
%     figure; plot3(RMS(1,:),RMS(2,:),RMS(3,:),'o');
%     figure; plot3(MAX(1,:),MAX(2,:),MAX(3,:),'o');
%     figure; plot3(sigRMSIntegral(1,:),sigRMSIntegral(2,:),sigRMSIntegral(3,:),'o');
%     figure; plot(RMS'); r = refline([0 1E-4]);
%     figure; plot(sigRMSIntegral')
end
F = [RMS',sigRMSIntegral',MAX',CLASS(:)];
F = F(:)';
end

