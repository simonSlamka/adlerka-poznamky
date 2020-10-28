#include <stdio.h>

//nacita 3x int a z nich maximum cez funkciu a maximum vypiste v main, funkcia ktora vypise vsetky cisla od 1 po zadane 

int max(int x, int y, int z);
void seq(int end);

void main(){
    int a, b, c, e;
    printf("zadaj 3 cisla:\n");
    scanf("%d %d %d", &a, &b, &c);
    e = max(a, b, c);
    printf("najvacsie cislo je: %d\n", e);
    seq(e);
    

}

int max(int x, int y, int z){
    if(x>=y&&x>=z) return x;
    else if(y>=x&&y>=z) return y;
    else if(z>=y&&z>=x) return z;
    else return x;
    
}

void seq(int end){
    for(int i = 1;i<end;i++){
        printf("%d, ", i);
    }
}