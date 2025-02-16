#include <stdio.h>

int main(){
    long long int a,binary=0,b=1;
    scanf("%lld",&a);
    
    while (a>0){
        int remainder = a%2;
        binary +=remainder*b;
        a /=2;
        b *=10;
    }
    printf("%llf",binary);
    
    return 0;
}