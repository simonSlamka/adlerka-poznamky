#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napiste program ktory z klavesnice nacita pocet prvkov pola, vygeneruje do pola cisla 0az30 a vypise ich na obrazovke
Napiste funkciu ktora najde poziciu minima
Napiste funkciu na najdenie poctu vyskytov v zadanom poli
vo funkcii main napiste cislo minimum a kolko krat sa tam nachadza
*/

int min(int p[], int pocet);
int klk(int p[], int pocet, int njm);

int main() {
    int n, i;

    printf("Zadaj kolko chces prvkov v poli: ");
    scanf("%d", &n);
    srand(time(0));

    if (n<=0 || n == 1) {
      printf("Zle si zadal cislo, zadaj kolko chces prvkov v poli: ");
      scanf("%d", &n);  
    }
    int pole[n];   

    for(i = 0;i<n;i++){
        pole[i]=rand()%31;
        printf("%d ", pole[i]);
    } 

    int low = pole[min(pole,n)];

     printf("\nNajmensi prvok pola je: %d\n", low);
     printf("Najmensi prvok v poli sa nachadza: %d Krat\n", klk(pole,n,low));
}

int min(int p[], int pocet) {
       int j, k, min;

    min = p[0];
    for(k = 1;k<pocet;k++){
       if (min>p[k]) {
           min=p[k];
           j = k;
       }
        
    } 

    return j;
}

int klk(int p[], int pocet, int njm) {
    int j, n = 0;

    for(j = 0; j<pocet; j++) {
        if(njm == p[j]) {
            n++;
        }
    }
    return n;
}