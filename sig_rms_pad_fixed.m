function [ y ] = sig_rms_pad_fixed( signal, windowlength, overlap )
delta = windowlength - overlap;
%% CALCULATE RMS
S = zeros(259,1);
indices = 1:delta:length(signal);
% Zeropad signal
    zeropad = zeros(9,1);
if length(signal) - indices(end) + 1 < windowlength
    S = [signal;zeropad];
end

y = zeros(1, length(indices));
% Square the samples
S = S.^2;

index = 0;
for i = indices
	index = index+1;
	% Average and take the square root of each window
	y(index) = sqrt(mean(S(i:i+windowlength-1)));
end


end

