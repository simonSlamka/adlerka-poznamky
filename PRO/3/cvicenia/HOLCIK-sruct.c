#include <stdio.h>

typedef struct car{
  char *make;
  char *model;
  int year;
} CARS_t;

int main() {
  CARS_t car[6] = {
    {
      "VW",
      "Transporter",
      2020
    },
    {
      "Acura",
      "NSX",
      2019
    },
    {
      "Tesla",
      "Cybertruck",
      2021
    },
    {
      "Subaru",
      "Impreza",
      2018
    },
    {
      "Toyota",
      "Supra",
      1997
    },
    {
      "Fiat",
      "500",
      2019
    },
  };
  printf("Prvé 3 autá:\n");
  for (int i = 0; i < 3; i++) {
    printf("Auto značky %s, model %s, rok %d\n",car[i].make,car[i].model,car[i].year);
  }
  printf("Ďalšie 3 autá:\n");
  for (int i = 3; i < 6; i++) {
    printf("Auto značky %s, model %s, rok %d\n",(car+i)->make,(car+i)->model,(car+i)->year);
  }
  printf("Koniec\n");
  return 0;
}
