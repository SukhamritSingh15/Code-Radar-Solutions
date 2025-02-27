#include <stdio.h>

int main(){
    int a;
    scanf("%c",&a);
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++){
            printf("%c " ,'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}