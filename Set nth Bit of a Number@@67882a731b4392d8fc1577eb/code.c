#include <stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    a = a|(b<<1);
    printf("%d",a);
    return 0;
}