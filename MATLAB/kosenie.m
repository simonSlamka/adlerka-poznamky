clc
clear all
close all

s = input('Zadaj sirku zahrady: ');
d = input('Zadaj dlzku zahrady: ');
sk = input('Zadaj sirku kosacky: ')/100;
dl = input('Zadaj dlzku kosacky: ')/100;
dk = input('Zadaj dlzku kroku: ')/100;

x = dl /2;
y = sk /2;
A = [];

axis([0 , d , 0 , s ]);
hold;
for i = sk /2 : sk : y <= s 
    y = y + sk;
    for j = dl/2 : dk : x <= d 
        A = [ A ; [ i , j]];
        plot( x , y , '*' )
        x = x + dk;
        pause( 0.0000001 );
    end
    x = 0;
end