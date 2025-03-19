#include <stdio.h>
int main(){
    int n,b,s;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int s = 1;s<=n-i;s++){
            printf(" ");
        }
        for(int b = 1;b<=i;b++){
            printf("%d ",b);
        }
    printf("\n");
    }
    return 0;   
}