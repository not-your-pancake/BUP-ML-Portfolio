close all;
clc;

x = [1,2];
y = [1,1];
% cross corrilation r_xy
cross_corr = xcorr(x,y);

n_x = 0:length(x)-1;
n_y = 0:length(y)-1;
n_cross_corr = -(length(y)-1):length(x)-1;

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
ylim ([0 3])
