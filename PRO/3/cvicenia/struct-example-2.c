#include <stdio.h>

typedef struct point{
  int x;
  int y;
} GRID_t;

int main() {
  GRID_t point[3] = {
    {1,1},
    {3,3},
    {7,5}
  };
  printf("Zadané body:\n");
  for (int i = 0; i < 3; i++) {
    printf("Bod [%d] má súradnice [%d,%d]\n",i,(point+i)->x,(point+i)->y);
  }
  point->x = 30;
  point->y = 20;
  printf("Body po zmene:\n");
  for (int i = 0; i < 3; i++) {
    printf("Bod [%d] má súradnice [%d,%d]\n",i,(point+i)->x,(point+i)->y);
  }
  return 0;
}
