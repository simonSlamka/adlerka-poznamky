clc
clear all
close all

L1 = 1;
L2 = 0.8;
alfa1 = ( 0 : 180 ) * pi / 180;
alfa2 = ( -90 : 90 ) * pi / 180;

x( 1 , : ) = L1 * cos( alfa1 );
y( 1 , : ) = L1 * sin( alfa1 );
x( 2 , : ) = L1 * cos( alfa1 ) + L2 * cos( alfa1 + alfa2 );
y( 2 , : ) = L1 * sin( alfa1 ) + L2 * sin( alfa1 + alfa2 );

plot( x( 1 , : ) , y( 1 , : ) , x( 2 , : ) , y( 2 , : ) );
axis([ -2 , 2 , -1 , 2 ]);
grid on;
hold;

n = 500;
for i = 1 : n
    plot( x ( : , i ) , y ( : , i ) , '-g');
    plot( x ( 2 , i ) , y ( 2 , i ) , '*k' );
    pause( 0.01 );
end