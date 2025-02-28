#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i =1;i<=a;i++){
        int sum = 1;
        for(int j = 1;j<=i;j++){
            printf("%d ",sum%2);
            sum++;
        }
        printf("\n");
    }
    return 0;
}