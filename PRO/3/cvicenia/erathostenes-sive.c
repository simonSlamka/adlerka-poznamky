#include <stdio.h>

int main() {
    int len;

    printf("Daj dlzku: \n");
    scanf("%d",&len);
    if (len < 1){
        printf("\nTo sa neda\n");
        return 1;
    }
    int nums[len];
    nums[0]=0;
    nums[1]=0;
    for (int i = 2; i < len; i++) {
        nums[i]=1;
    }
    for (int i=0;i < len;i++){
        if (nums[i]==1){
            printf("i = %d\n",i);
            for (int j = 2*i; j < len;j+=i) {
                printf("j = %d\n",j);
                printf("nums[j] = %d\n",nums[j]);
                nums[j]=0;
            }
        }
    }

    for (int i = 0; i < len; i++) {
        printf("Nums: %d\n",nums[i]);
    }
    printf("finals: \n");
    for (int i = 0; i < len; i++) {
        if (nums[i]==1){
            printf("Nums: %d\n",i);
        }
    }

    return 0;
}
