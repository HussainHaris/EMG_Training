% DATAANALYSIS2
% 1:
clear;close all; clc;
PLOT_DATA = false;
% [DATA,filename] = csvread('params.csv');
% [DATA,filename] = csvread('EMG_TrainingData_20170912_13.52.16.csv');
[DATA] = csvread('EMG_TrainingData_20170915_16.34.35.csv');

figure; 
for i = 1:4
    subplot(4,1,i);
    plot(DATA(:,i));
end
% F = ctrainingRoutineKNN(DATA(1:30000,:),PLOT_DATA);
F = ctrainingRoutineKNN2(DATA(1:30000,:));
plot_style = {'.r','.k','.y','.m','.c','.g','.b'};

%{
F_reconstructed_matrix = reshape(F,[length(F)/10, 10]);
% for i = 1:10
%     A_RECON(:,i) = F(1+(length(F)/10)*(i-1):(length(F)/10)*i);
% end
PS = [];
figure(1); clf(1);
for i = 1:size(F_reconstructed_matrix,1)
    switch(F_reconstructed_matrix(i,10))
        case 0
            PS = plot_style{1};
            SIZE(i,:) = 10;
            COLORS(i,:) = 0;
        case 1
            PS = plot_style{2};
            SIZE(i,:) = 20;
            COLORS(i,:) = 1;
        case 3
            PS = plot_style{3};
            SIZE(i,:) = 30;
            COLORS(i,:) = 2;
        case 4
            PS = plot_style{4};
            SIZE(i,:) = 30;
            COLORS(i,:) = 3;
        case 5
            PS = plot_style{5};
            SIZE(i,:) = 20;
            COLORS(i,:) = 4;
        case 6
            PS = plot_style{6};
            SIZE(i,:) = 30;
            COLORS(i,:) = 5;
        case 7
            PS = plot_style{7};
            SIZE(i,:) = 40;
            COLORS(i,:) = 6;
    end
    
end
S = [];
figure(1); clf(1); 
h1 = scatter3(F_reconstructed_matrix(:,1),F_reconstructed_matrix(:,2),F_reconstructed_matrix(:,3),SIZE,COLORS,'filled'); xlabel('RMS Ch 1'); ylabel('RMS Ch 2'); zlabel('RMS Ch 3');
% legend('Open','Closed','Thumb','Index','Middle','Ring','Pinky');
% figure(2); clf(2); 
% h2 = scatter3(F_reconstructed_matrix(:,4),F_reconstructed_matrix(:,5),F_reconstructed_matrix(:,6),SIZE,COLORS,'filled');
% figure(3); clf(3); 
% h3 = scatter3(F_reconstructed_matrix(:,7),F_reconstructed_matrix(:,8),F_reconstructed_matrix(:,9),SIZE,COLORS,'filled');
% PLOT_DATA = false;
%% Test PARAMS:
Fs = 250;
chunk_size = 500;
win_hop = 61; %1/2 second
len = size(DATA,1);
wStart = 1:win_hop:(len-chunk_size);
AssignedClass = zeros(length(wStart),1);
% PARAMS = PARAMS(:); 
TRAIN = true;
Y = 0;

for i=1:length(wStart)
    fprintf('[%d to %d] \n',wStart(i),wStart(i)+(chunk_size-1));
    for j=1:3
        dW(:,j) = DATA(wStart(i):wStart(i)+(chunk_size-1),j);
    end
    labels = DATA(wStart(i):wStart(i)+(chunk_size-1),4);
    PredominantClass(i) = mode(labels);
%     [Y,F(i,:)] = classifyArmEMG2(dW,Y,PARAMS,PLOT_DATA);
%     Y = classifyArmEMG3(dW,F_reconstructed_matrix,PLOT_DATA);
    Y = classifyArmEMG4(dW,F_reconstructed_matrix,1,PLOT_DATA);
    Y_all(i) = Y;
    Y
%     %{
    if(PLOT_DATA)
        commandwindow; 
        CLASS = input('Continue? \n');
        if(isempty(CLASS)) 
            AssignedClass(i) = PredominantClass;
        else
            AssignedClass(i) = CLASS;
        end
        figure(1); clf(1);
    end
    fprintf('AssignedClass = %d \n',AssignedClass(i));
%     %}
end

figure; plot(Y_all);
COMPARE = sum(Y_all==PredominantClass)/length(Y_all)
%}