#include <stdio.h>
#include <string.h>


//naplnte n prvkove pole- fibonacciho postupnost, pouzite pri tom pointerovy zapis hranate zatvorky len v deklaracii pola

int main() {
    int n = 0;
    
    printf("Zadaj pocet prvkov pola: ");
    scanf("%d", &n);
    int pole[n];

    *pole=0;
    *(pole+1)=1;
    for(int i =2;i<n;i++) {
        *(pole+i)=*(pole+(i-2))+*(pole+(i-1));
    }
    for(int j = 0; j<n;j++){
        printf("%d ", *(pole+j));
    }

}