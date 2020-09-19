#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int average(int *nums,int l){
  int avrg = 0;
  for (int i = 0; i < l; i++) {
    avrg += *(nums+i);
  }
  return avrg/l;
}

int count(int *nums,int l,int target){
  int cnt = 0;
  for (int i = 0; i < l; i++) {
    if (*(nums+i) == target) {
      cnt++;
    }
  }
  return cnt;
}

int main() {
  int len;
  srand(time(0));
  printf("Zadaj pocet cisiel\n");
  scanf("%d",&len);
  if(len <= 0){
    printf("Interval nemoze byt nulovy\n");
    return 1;
  }
  int arr[len];

  for (int i=0;i<len;i++){
    *(arr+i)= rand() % 41-20;
    printf("Cislo:%d\n",*(arr+i));
  }

  int arr_average = average(arr,len);
  printf("Priemerna hodnota: %d\n",arr_average);

  printf("A nachádza sa tam %d krát\n",count(arr,len,arr_average));

  return 0;
}
