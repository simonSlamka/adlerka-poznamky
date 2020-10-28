#include <stdio.h>
#include <string.h>

int main(){
    int y = 0, n = 0;
    int pole[10];

    for(int j = 0; j<10; j++){
        printf("Zadaj cislo: ");
        scanf("%d", &pole[j]);
    }
    printf("Zadaj cislo ktore hladas: ");
    scanf("%d", &y);


    for(int i = 0; i<10; i++) {
        if(y == pole[i]) {
            n++;
        }
    }
    printf("Cislo ktore hladas sa v poli nachadza : %d krat\n", n);

}