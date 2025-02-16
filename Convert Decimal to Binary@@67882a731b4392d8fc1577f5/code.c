#include <stdio.h>

int main(){
    int a,binary=0,b=1;
    scanf("%d",&a);
    
    while (a>0){
        int remainder = a%2;
        binary +=remainder*b;
        a /=2;
        b *=10;
    }
    printf("%d",binary);
    
    return 0;
}