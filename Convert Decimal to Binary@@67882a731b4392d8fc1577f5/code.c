#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    if (a==0){
        printf("0");
    }
    while(a>0){
        printf("%d",a%2);
        a /=2;
    }
    return 0;
}