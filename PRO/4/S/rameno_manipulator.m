clc
clear all
close all

n = 50;
L_1 = 1.3;
L_2 = 0.7;
alfa_1 = linspace( 0 , pi , n );
alfa_2 = linspace( -pi/2 , 3*pi/2 , n );

x( 2 , : ) = L_1 * cos( alfa_1 ) ;
y( 2 , : ) = L_1 * sin( alfa_1 ) ;

x( 3 , : ) = L_1 * cos( alfa_1 ) + L_2 * cos( alfa_1 + alfa_2 ) ;
y( 3 , : ) = L_1 * sin( alfa_1 ) + L_2 * sin( alfa_1 + alfa_2 ) ;

x( 1 , : ) = 0 ;
y( 1 , : ) = 0 ;

plot( x , y , '-' , x(3,:) , y(3,:) , 'g*');
axis([ -1.5 , 2 , -1 , 2 ]);
grid;
hold;
%%
for i = 1 : n
    plot( x ( : , i ) , y ( : , i ) , '-g');
    plot( x ( 3 , i ) , y ( 3 , i ) , '*k' );
    pause( 0.1 );
end