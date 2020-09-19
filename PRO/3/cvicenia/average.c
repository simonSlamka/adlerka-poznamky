#include <stdio.h>

void abc(void);
int maxi(int x,int y);
float average(int x,int y);

void main() {
  int a,b;
  float c;
  abc();
  printf("Zadaj 2 cele cisla\n");
  scanf("%d%d",&a,&b);
  printf("vacsie cislo je %d\n", maxi(a,b));
  printf("priemer je %f\n", average(a,b));
}

void abc(void) {
  printf("ZacFunc\n");
}

int maxi(int x,int y){
  if (y>x){return y;}
}

float average(int x,int y) {
  return (x+y)/2.0;
}
