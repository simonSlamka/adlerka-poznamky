#include <stdio.h>

/*napiste: rekurzivnu funkciu na vypocet mocniny vo funkcii main nacitate zaklad a exponent 
zavolate funkciu na vypocet mocniny
*/

long int mocnina(int zaklad, int mocnina);

int main(){
    int z = 1, m = 1;

    printf("Zadaj zaklad: ");
    scanf("%d", &z);
    if(z < 0) {
        printf("Zadaj cislo >= 0: ");
        scanf("%d", &z);
    }

    printf("Zadaj exponent: ");
    scanf("%d", &m);
    if(m < 0) {
        printf("Zadaj cislo >= 0: ");
        scanf("%d", &m);
    }

    printf("Vystup: %li\n", mocnina(z, m));


}

long int mocnina(int zaklad, int exponent){
    if(exponent > 0) {
       return zaklad*mocnina(zaklad, (exponent-1));
    }
    else  { 
        return 1;
    }

}
