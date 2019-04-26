function [ P, F ] = ctrainingRoutine( dW, PLOT_DATA )
%%
% Inputs:
% dW = data array : [4 x 30000]
% Outputs
% P = [11 x 1] Contains double size parameters
% .Index..,1....2....3....4....5....6....7..%
CLASSES = [0.0, 1.0, 3.0, 4.0, 5.0, 6.0, 7.0];
b = [0.777246521400202,-0.295149620198606,2.36909935327861,-0.591875563889248,2.36909935327861,-0.295149620198606,0.777246521400202];
a = [1,-0.348004594825511,2.53911455972459,-0.585595129484226,2.14946749012577,-0.248575079976725,0.604109699507276];
% 2Hz High Pass:
b1 = [0.950971887923409,-2.85291566377023,2.85291566377023,-0.950971887923409];
a1 = [1,-2.89947959461186,2.80394797738300,-0.904347531392409];
%Param declaration:
P = zeros(11,1);
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
        CLASS(j) = mode(dW(wStart(j):wStart(j)+249,4));
    end
end
%selectVectors:
S = false(length(CLASSES),length(CLASS));
for i = 1:length(CLASSES)
    S(i,:) = CLASS == CLASSES(i);
end
R = zeros(2,1);
A = zeros(3,1);

% ALL CLASSES: Min threshold for activity:
P(1) = mean(mean(RMS(:, S(1,:))))*2.1;
% CLASS 1: HOLD, Ripple Detection for closed hand:
P(2) = mean(sigRMSIntegral(2, S(2,:)))*0.7;
% CLASS 4,7 HOLD, Ripple detection for C4,7
%     R(1) = mean(RMS(3,S(7,:))); R(2) = mean(RMS(3,S(4,:)));
R(1) = min(RMS(3, S(7,:))); R(2) = min(RMS(3,S(4,:)));
P(3) = min(R)*0.8;
% CLASS 3,5,6: HOLD, Ripple detection for C3,5,6 
A(1) = min(RMS(1,S(6,:))); A(2) = min(RMS(1,S(5,:))); A(3) = min(RMS(1,S(3,:)));
P(4) = min(A)*0.9;
% --- 
% CLASS: 1, Hand CLOSE Initial (MAX THRESHOLD, ALL CHANNELS):
A(1) = max(MAX(1,S(2,:))); A(2) = max(MAX(2,S(2,:))); A(3) = max(MAX(3,S(2,:)));
P(5) = min(A)*0.75;
% CLASS: 4,7 CLOSE Initial Threshold for detection RMS(3) > P(6)
R(1) = max(RMS(3,S(7,:))); R(2) = max(RMS(3,S(4,:)));
P(6) = min(R)*1.1;
% CLASS: 7, Close initial detection, RMS(3)-RMS(1) > P(7);
C = RMS(3,S(7,:)) - RMS(1,S(7,:));
% L = RMS(3,~S(7,:)) - RMS(1,~S(7,:)); % all other:
P(7) = min(C)*1.25;
% CLASS: 5, close detection: gap less than RMS(1)-RMS(3)
D = RMS(1,S(5,:)) - RMS(3,S(5,:));
P(8) = max(D)*1.125;
% CLASS: 4, close detection gap less than RMS(1) - RMS(2)
E = RMS(1,S(4,:))-RMS(2,S(4,:));
P(9) = max(E)*1.1;
%CLASS: 4, close detection RMS(1) < P(10);
P(10) = max(RMS(1,S(4,:)))*1.1;
%CLASS: 3, close detection. 
P(11) = 0.75*(A(3));
if(PLOT_DATA)
    figure(2); clf(2);
    subplot(3,1,1); plot(sigRMSIntegral'), title('sigRMSIntegral');%,ylim([-1E-2,1E-2]);
%     r = refline([0 P(2)]); r.Color = 'r';
    subplot(3,1,2); plot(MAX');title('MAX');
%     r=refline([0,P(5)]); r.Color='k';
    subplot(3,1,3); plot(CLASS); title('CLASS');
    figure(3); plot(RMS'); title('RMS');
%     r=refline([0,P(1)]); r.Color='r';
%     r=refline([0,P(3)]); r.Color='k';
end
F = [RMS',sigRMSIntegral',MAX',CLASS(:)];
end

