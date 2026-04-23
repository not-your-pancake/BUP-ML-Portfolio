close all;
clc;

 x = [0,1,2,0,3,4,1];
 n = 0:6;
 
% x[n-3] time shifting

n_shifted1 = n+3; % x[n-3]
n_shifted2 = n-1; % x[n+1]
 figure;
 subplot(311);
 stem(n,x,'filled'); % stem(time, signal)
 title('x[n]');
 grid on;
 
 subplot(312);
 stem(n_shifted1,x,'filled');
 title('x[n-3]');
 grid on;
 
 subplot(313);
 stem(n_shifted2,x,'filled');
 title('x[n+1]');
 grid on;
