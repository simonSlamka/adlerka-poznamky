#include <stdio.h>

typedef struct povoz
    {
        char znacka[20];
        char model[20];
        int rok;
    }POVOZ_t;

int main() {
        
    POVOZ_t povoz[6] = {
        {"Skoda","Rapid", 2019},
        {"Nissan","300ZX",1989},
        {"Tesla", "Roadster", 2020},
        {"Tesla", "Cybertruck", 2020},
        {"Fiat", "Multipla", 2010},
        {"Volkswagen", "Golf", 2018}

    };
/*
    Pokus o naplnenie scanovanim  
    Z nejakeho dovodu nacita iba 1 auto a potom cyklus skonci

    POVOZ_t povoz[6];

    for(int i = 0;i < 6;i++) {
        printf("\n znacka: ");
        scanf("%s", povoz[i].znacka);
        printf("\n model: ");
        scanf("%s", povoz[i].model);
        printf("\n rok: ");
        scanf("%s", povoz[i].rok);
    }   
*/
    

    printf("prve 3: \n");
    for (int i = 0; i < 3; i++) {
        printf("znacka: %s\n",povoz[i].znacka);
        printf("model: %s\n", povoz[i].model);
        printf("rok: %d\n\n", povoz[i].rok);

    }
    printf("druhe 3: \n");
    for (int i = 3; i < 6; i++) {
        printf("znacka: %s\n",(povoz+i)->znacka);
        printf("model: %s\n", (povoz+i)->model);
        printf("rok: %d\n\n", (povoz+i)->rok);

    }    
}