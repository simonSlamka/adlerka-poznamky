#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Napiste program ktory z klavesnice nacita pocet prvkov pola, vygeneruje do pola cisla -20az20 a vypise ich na obrazovke
Napiste funkciu ktora najde poziciu maxima
*/

int spocitaj(int pole[], int pocet);
int max(int pole[], int pocet);

int main() {
    int n,i;
    printf("zadaj pocet cisel ktore chces scitat: ");
    scanf("%d", &n);
    srand(time(0));
    
    if(n<=0) return 0;
    int p[n];

    for(i = 0;i<n;i++){
        p[i]=rand()%41-20;
        printf("%d ", p[i]);
    }

    printf("\nSucet prvkov pola je: %d\n", spocitaj(p, n));
    printf("Najvyssi prvok pola je: %d\n", p[max(p,n)]);

}

int spocitaj(int pole[], int pocet) {
    int j, sucet = 0;

    for (j = 0; j < pocet; j++) {
        sucet += pole[j];
    }
    return sucet;
    
}

int max(int pole[], int pocet){
    int j, k, max;

    max = pole[0];
    for(k = 1;k<pocet;k++){
       if (max<pole[k]) {
           max=pole[k];
           j = k;
       }
        
    } 

    return j;
}