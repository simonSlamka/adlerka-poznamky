#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char pole[20];
    
    printf("Zadaj priezvisko: ");
    gets(pole);
    printf("tvoje priezvisko: %s", pole);


    return 0;
}