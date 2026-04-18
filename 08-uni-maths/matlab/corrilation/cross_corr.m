close all;
clc;

x = [1,2];
y = [1 1];

noise = 0.2*rand(size(y));

noisy_y = y + noise;

% cross corrilation r_xy
cross_corr = xcorr(x,noisy_y);

n_x = 0:length(x)-1;
n_y = 0:length(noisy_y)-1;
n_cross_corr = 0:length(cross_corr)-1;

figure;
subplot(311)
stem(n_x,x)
title('input of x')

subplot(312)
stem(n_y,y)
title('input of y')

subplot(313)
stem(n_cross_corr,cross_corr)
title ('cross corrilation plot')

