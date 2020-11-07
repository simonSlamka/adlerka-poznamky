#include <stdio.h>

typedef struct product{
  char *name;
  int id;
  int price;
  int avlb;
} PRODUCTS_t;

int main() {
  PRODUCTS_t prod[6] = {
    {
      "AMD Ryzen 9 5950X",
      354,
      780,
      0
    },
    {
      "AMD Ryzen 9 5900X",
      352,
      550,
      1
    },
    {
      "AMD Ryzen 7 5800X",
      351,
      470,
      3
    },
    {
      "AMD Ryzen 5 5600X",
      350,
      300,
      1
    },
    {
      "AMD Radeon 6900XT",
      557,
      1000,
      0
    },
    {
      "AMD Radeon 6800XT",
      555,
      650,
      0
    },
  };

  printf("\nPrvé 3 produkty:\n");

  for (int i = 0; i < 3; i++) {
    printf("Produktu %s zodpovedá id %d a cena %d€, ", prod[i].name, prod[i].id, prod[i].price);
    if (prod[i].avlb == 1) {
      printf("je na sklade\n");
    } else if (prod[i].avlb == 0) {
      printf("nie je na sklade\n");
    } else {
      printf("\n\nError: Dostupnosť produktu je nesprávne uvedená\n");
      return 1;
    }
  }

  printf("\nĎalšie 3 produkty:\n");

  for (int i = 3; i < 6; i++) {
    printf("Produktu %s zodpovedá id %d a cena %d€, ",(prod+i)->name,(prod+i)->id,(prod+i)->price);
    if ((prod+i)->avlb == 1) {
      printf("je na sklade\n");
    } else if ((prod+i)->avlb == 0) {
      printf("nie je na sklade\n");
    } else {
      printf("\n\nError: Dostupnosť produktu je nesprávne uvedená\n");
      return 1;
    }
  }

  printf("\nKoniec zoznamu\n");
  return 0;
}
