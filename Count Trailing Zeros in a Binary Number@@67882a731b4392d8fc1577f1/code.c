#include <stdio.h>

int main(){
    int a,count=0;
    scanf("%d",&a);
    if(a==0){
        printf("32");
    }

    while ((a&1)==0){
        count++;
        a>>=1;
    }
    printf("%d",count);
    return 0;
}