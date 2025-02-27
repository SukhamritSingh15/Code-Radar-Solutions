#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int i = 1;i<=a;i++){
        printf("*");
        for(int j = 1;j<=i;j++){
            for(int k = 1;k<=j;k++){
                printf("*");
            }
        }
        printf("\n");
    } 
    return 0;
}