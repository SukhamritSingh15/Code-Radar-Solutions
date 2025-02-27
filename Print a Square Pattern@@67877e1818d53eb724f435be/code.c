#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for(int i = a;i<=a;i++){
        for(int j = 1;j<=a;j++){
            printf("* ");
        }
        for(int k = 1;k<=j;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}