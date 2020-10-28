#include <stdio.h>

void sucet(int a, int b, int *vys);
void desat(int *csl);
void inkrement(int *nc);

void main(){
    int x = 0,y = 0, sct = 0, dst = 0;

    printf("Zadaj cislo: ");
    scanf("%d", &x);
    printf("Zadaj este jedno cislo: ");
    scanf("%d", &y);

    sucet(x, y, &sct);
    printf("Sucet je: %d\n", sct);
    
    desat(&dst);
    printf("Funkcia desat dava vystup: %d\n", dst);

    inkrement(&x);
    printf("Funkcia inkrement dava vystup: %d", x);

}

void sucet(int a, int b, int *vys) {
    *vys = a + b;
}

void desat(int *csl) {
    *csl = 10;
}
void inkrement(int *nc) {
    (*nc)++;
}