clc 
clear all
close all 

L1=1;
L2=0.8;
alfa1=[0:180]*pi/180;
alfa2=[-90:90]*pi/180;
x1=L1*cos(alfa1);
y1=L1*sin(alfa1);
x2=L1*cos(alfa1)+L2*cos(alfa1+alfa2);
y2=L1*sin(alfa1)+L2*sin(alfa1+alfa2);
plot(x1, y1, x2, y2);
grid on;