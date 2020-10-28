#include <stdio.h>

//vypocitajte ciferny sucet 

int main(){
    int vst = 0, x = 0;

    printf("Zadaj nejake cislo: ");
    scanf("%d", &vst);

    if(vst < 0) {
        vst *= -1;
    }


    while(vst!=0) {
        x += vst%10;
        vst /= 10;
    }
    printf("sucet cisiel je: %d\n", x);
}