#include <stdio.h>

void abc();
int maxi(int x, int y);
float avg(int i, int j);

int main() {

    int a,b;
    abc();
    printf("zadaj cisla: ");
    scanf("%d %d", &a, &b);
    printf("vacsie je %d\n", maxi(a, b));
    printf("priemer dvoch zadanych cisel je: %f\n", avg(a, b));


}

void abc (void) {
    printf("zadefinovana funkcia abc\n");
}

int maxi(int x, int y) {
    if(x>y) return x;
    else return y;
}

float avg(int i, int j) {
    return (i+j)/2.0;
}