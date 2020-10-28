#include <stdio.h>

/*napiste: funkciu na vypocet faktorialu, 
vo funkcii main nacitajte nezaporne cislo zavolajte funkciu faktorial na vypocet faktorialu zadaneho cisla vypiste v main*/

long int faktorial(int vst);

int main() {
    int x = 1;

    printf("Zadaj cislo: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Zadaj cislo vacsie ako 0, dakujem: ");
        scanf("%d", &x);
    }
    printf("Vystup: %ld\n", faktorial(x));

}

long int faktorial(int vst) {
    long int vys = 1;
    if(vst == 0){
        return 1;
    } 
    else {
        for (int i = 1;i<=vst;i++) {
            vys *=i;
        }
        return vys;
    }

}