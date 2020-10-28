#include <stdio.h>

typedef struct car{
  char *znacka;
  char *model;
  int rok;
} CARS_t;

int main() {
  CARS_t car[6] = {
    {
      "Skoda",
      "Rapid",
      2019
    },
    {
      "Nissan",
      "300ZX",
      1989
    },
    {
      "Tesla",
      "Cybertruck",
      2020
    },
    {
      "Volkswagen",
      "golf",
      2018
    },
    {
      "Tesla",
      "Roadster",
      2020
    },
    {
      "Fiat",
      "Multipla",
      2010
    },
  };
  printf("3 auta: \n");
  for (int i = 0; i < 3; i++) {
    printf("znacka: %s, model: %s, rok: %d\n", car[i].znacka, car[i].model, car[i].rok);
  }
  printf("Ďalšie 3 autá:\n");
  for (int i = 3; i < 6; i++) {
    printf("znacka: %s, model: %s, rok: %d\n",(car+i)->znacka,(car+i)->model,(car+i)->rok);
  }
  return 0;
}