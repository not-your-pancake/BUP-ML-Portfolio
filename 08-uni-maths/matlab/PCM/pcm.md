# Viva
- pcm er prblem ki ? amplitude ki jani hoile kicu ekta hoy (LAB questions)
- dpcm vs pcm 

<p>
  Part 1: The Setup (Cleaning the Desk)
Before you start any project, you clear your desk. That’s what these three lines do:
  
`clc;        % Clears the command window (the text area)
clear all;  % Deletes all saved numbers/variables
close all;  % Closes any open picture windows (graphs)`
</p>

<p>
  Part 2: The Inputs (Setting the Rules)
Now, the computer asks you for two things:
  
  `n = input('Enter the value of n for quantization: '); 
% This is how many "Lego" blocks we have. Usually a small number like 3 or 4.

samples = input('enter the value of sample: ' ); 
% This is how many "photos" we take of the wave.`

</p>

<p>
  Part 3: Creating the Wave (The Song)
We need a sound to turn into code. We use a Sine Wave (it looks like a smooth roller coaster).
  
  `Vm = 8;                             % The "volume." The wave goes up to 8 and down to -8.
x = 0 : 2*pi/samples : 4*pi;        % This creates the "Timeline."
msg = Vm*sin(x);                    % This is the actual smooth wave (the "Message").`
  
</p>

<p>
  `subplot(3,1,1);     % Creates a grid of 3 rows. This is the top one.
plot(msg);          % Draws a smooth line (The "Analog" wave).
title('sine curve');

subplot(3,1,2);     % This is the middle row.
stem(msg);          % Draws dots on sticks! (The "Sampled" wave).
title('sine discrete curve');`
</p>

