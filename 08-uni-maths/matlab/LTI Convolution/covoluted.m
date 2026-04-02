close all;
clc

x = [1 2 3]
h = [1 1 1]
y = conv(x,h)

n_x = 0:length(x)-1;
n_h = 0:length(h)-1;
n_y = 0:length(y)-1;

figure;
subplot(311)
stem(n_x,x)% input 1 2 3
subplot(312)
stem(n_h,h)% impulse response 1 1 1
subplot(313)
stem(n_y,y)% convoluted 

% exam, x= {1 2 3 4 5 6} nx = [-3:2]
% h = {2 3 6 4 5 7} nh = [-x:3]

nx = [-3:2]
nh = [-x:3]
kmin = x(1)+h(1)
kmax = x(end)+h(end)
ny = kmin:kmax

% report of convolution 
