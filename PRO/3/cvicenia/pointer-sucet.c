#include <stdio.h>

void plus(int x,int y,int *out){
  *out = x + y;
}

void ten(int *num) {
  *num = 10;
}

void increment(int *pnt) {
  ++*pnt;
}

int main() {
  int a,b,c;

  printf("Napis mi sem nejake 2 cisielka\n");
  scanf(" %d%d",&a,&b);

  plus(a,b,&c);

  printf("Jedno plus druhe je %d\n",c);

  ten(&c);

  printf("Desat sa pise takto %d\n",c);

  increment(&c);

  printf("A jedenast takto %d\n",c);


  return 0;
}
