#include <stdio.h>
/*
Napiste:
rekurzivnu funkciu na vypocet mocniny
vo funkcii main nacitajte zaklad a exponent
zavolate funkciu na vypocet mocniny
vo funkcii main vypista vysledok
*/
long int tpow(int base, int exp);

int main() {
  int nb,nx;
  printf("Zadaj cislo na umocnenie\n");
  scanf("%d%d",&nb,&nx);
  if (nx < 0){
    return 1;
  }
  printf("Test");
  printf("\nMocnina %ld\n", tpow(nb,nx));
  return 0;
}

long int tpow(int base, int exp){
  if(exp == 0){return 1;}
  else return base*tpow(base,exp-1);
};
