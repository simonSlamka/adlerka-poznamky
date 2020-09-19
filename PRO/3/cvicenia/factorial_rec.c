#include <stdio.h>
/*
napisat funkciu na vypocet faktorialu
vo funkcii main nacitat nezaporne cislo
zavolat funkciu factorial na vypocitanie faktorialu a vypisat v main
*/
long int factorial(int inpt);

void main() {
  int facnum;
  printf("Zadaj cislo na factorial\n");
  scanf("%d",&facnum);
  printf("Test");
  printf("\nFactorial %ld\n", factorial(facnum));
}

long int factorial(int inpt){
  if(inpt<0){
    return 0;
  } else if (inpt>0){
    return inpt * factorial(inpt-1);
  } else return 1;
}
