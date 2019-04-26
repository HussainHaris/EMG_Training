function [b, a] = customFiltConstants(Fs,f,N)
Wn=[f(1) f(2)]*2/Fs; % cut off based on Fs
[b,a] = butter(N,Wn);
end