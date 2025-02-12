#include <stdio.h>
int main(){
    int a,pos = 0;
    scanf("%d",&a);
    if(a==0){
        printf("-1");
    }
    while((a&1)==0){
        a>>=1;
        pos++;
    }
    printf("%d",pos);
    return 0;
}