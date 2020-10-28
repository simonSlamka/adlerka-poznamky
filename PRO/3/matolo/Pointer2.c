#include <stdio.h>

void swap1(int x, int y) {
    int z;
    z = x;
    x = y;
    y = z;
}

void swap2(int *x, int *y){
    int z;
    z = *x;
    *x = *y;
    *y = z;

}

int main() {
    int a, b;
    printf("Zadaj cisla");
    scanf("%d %d", &a, &b);
    printf("a=%d b=%d", a, b);
    swap1(a, b);
    swap2(&a,&b);


    return 0;
}