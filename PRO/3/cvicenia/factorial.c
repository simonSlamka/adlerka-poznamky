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
  long int aux = 1;
  if(inpt<0){
    return 0;
  } else if (inpt==0){
    return 1;
  } else{
    while (inpt > 1) {
      aux *= inpt;
      inpt--;
    }
    return aux;
  }
}
