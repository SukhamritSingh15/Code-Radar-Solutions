#include <stdio.h>
int main(){
    unsigned int a,count = 0;
    scanf("%lu",&a);
    if(a==0){
        printf("32");
    }
    while(a>0){
        count++;
        a>>=1;
    }
    printf("%d",32-count);
    return 0;
}