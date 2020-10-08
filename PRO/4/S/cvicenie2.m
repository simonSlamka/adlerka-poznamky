clc 
clear all
close all 

x = -10:0.1:10;
y = (x.^2)+(2*x)+5;
subplot(2,1,1);
plot(x,y,'r-.o');
xlabel('X');
ylabel('Y');
grid on;
title('Graf');

subplot(2,1,2);
T = 5;
K = 2.5;
t = 0:0.1:5;
y = K*(1-exp(-T*t));
plot(t, y);
xlabel('X');
ylabel('Y');
grid on;
title('Graf 2');