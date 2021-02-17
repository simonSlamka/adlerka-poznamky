clc
clear all
close all

x = -10 : 0.1 : 10;
y = x.^2 + 2*x + 5;

subplot( 2, 1, 1)
plot(x, y, 'r--')
xlabel('x')
ylabel('y')
title('kvadraticka funkcia')
grid
hold;

subplot( 2, 1, 2)
T = 5;
K = 2.5;
t = 0 : 0.1 : 5;
z = K*(1-exp(-T*t))
plot(t, z)
xlabel('t')
ylabel('z')
title('staticka funkcia s oneskorenim 1. radu')
grid
hold;