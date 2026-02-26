clc; % comand window clearn kore
close all; % window clean kore
clear all; % variable clear kore

% stem --> discrete signal

%{
t = 0:0.001:1;
f = 10;
y1 = sin(2*pi*f*t);
y2 = cos(2*pi*f*t);

z = y1 + y2;

subplot(4,1,1);
plot(t,y1);
xlabel('time');
ylabel('y1');
title('sine graph');

subplot(4,1,2);
plot(t,y2);
xlabel('time');
ylabel('y2');
title('cosine graph');

subplot(4,1,3);
plot(t,z);
xlabel('time');
ylabel('z');
title('total graph');

% unit impulse signal 
n = -1:0.001:1;
impulse = [zeros(1,1000),ones(1,1),zeros(1,1000)];
subplot(4,1,4);
plot(n,impulse,'r');
xlabel('time');
ylabel('impulse');
grid on;
title('impulse graph');
ylim([0,2]);

%}

% unit step signal
impulse = [zeros(1,1000),ones(0,1000)];
n = -1:0.001:1;
subplot(4,1,4);
plot(n,impulse,'r');
xlabel('time');
ylabel('impulse');
grid on;
title('impulse graph');
ylim([0,2]);

% ram 
n = 0:0.001:1;
ram = t;
plot (t,ram);

% sin200t + cos300t
% hw