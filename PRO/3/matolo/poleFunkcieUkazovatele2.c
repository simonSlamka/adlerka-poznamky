#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int avg(int *pole, int pct);
int pcetV(int *pole, int pct, int aveg);

int main() {
    int n,i;
    printf("zadaj pocet cisel ktorych chces priemer: ");
    scanf("%d", &n);
    srand(time(0));
    
    if(n<=0) return 0;
    int p[n];

    for(i = 0;i<n;i++){
        *(p+i)=rand()%21;
        printf("%d ", *(p+i));
    }

    int priemer = avg(p,n);
    printf("\nPriemer je: %d\n", priemer);
    printf("Priemerne cislo sa v poli nachadza: %d", pcetV(p,n,priemer));
}

int avg(int *pole, int pct) {
    int i = 0, sct = 0;

    for (i=0;i<pct;i++)
    {
        sct += *(pole + i);
    }
    return sct/pct;
}
int pcetV(int *pole, int pct, int aveg) {
    int j = 0, pctV=0;

    for(j = 0;j<pct;j++) {
        if(*(pole + j) == aveg) {
            pctV++;
        }
    }
    return pctV;
}