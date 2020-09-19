#include <stdio.h>

int swp(int x,int y){
  int aux;
  aux = x;
  x = y;
  y = aux;
}
int swpp(int *x,int *y){
  int aux;
  aux = *x;
  *x = *y;
  *y = aux;
}

int main() {
  int a,b;
  printf("Zadaj 2 cisla:\n");
  scanf(" %d%d",&a,&b);
  swpp(&a,&b);
  printf("a=%d b=%d\n",a,b);
  return 0;
}
