#include <stdio.h>

int main(){
    int a,isprime = 1;
    scanf("%d",&a);
    if(a<2){
        printf("not a prime");
    }
    for (int i = 2;i*i<=a;i++){
        if(a%i==0){
            isprime = 0;
            break;
        }
    }
    if(isprime){
        printf("is prime");
    }
    else{
        printf("not a prime");
    }
    return 0;
}
 
