#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int maximum(int arr[],int x){
  int aux = 0,max = arr[0];
  for(int i;i<x;i++){
    if (arr[i] > max){
      aux = i;
    }
  }
  return aux;
}
*/

int maximum(int *arr,int x){
  int pos,max;

  max = *(arr);
  pos=0;

  for(int i;i<x;i++){
    if (*arr+i > max){
      pos = i;
    }
  }
  return pos;
}

int spocitaj(int arr[],int count) {

}

void main() {
  int n,aux;
  srand(time(0));
  printf("Zadaj pocet cisiel\n");
  scanf("%d",&n);
  int s[n];

  for (int i=0;i<n;i++){
    *(a+i)= rand() % 101-50;
    printf("Cislo:%d\n",*(a+i));
  }

  /*
  for (int i=0;i<n;i++){
    printf("Zadaj cislo\n");
    scanf("%d",&s[i]);
  }
  */
  aux = maximum(s,n);
  printf("Maximum je %d na pozicii %d\n",s[aux],aux);
}
