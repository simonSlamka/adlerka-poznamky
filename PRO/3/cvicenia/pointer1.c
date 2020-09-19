#include <stdio.h>

int main() {
  int i, *pi1,*pi2;
  printf("Zadaj cislo\n");
  scanf(" %d",&i);
  pi1 = &i;
  pi2 = pi1;
  *pi1 = 11;
  printf("hodnoty su %d %d %d\n",i,*pi1,*pi2);
  printf("adresy su %p %p %p\n",&i,pi1,pi2);

  return 0;
}
