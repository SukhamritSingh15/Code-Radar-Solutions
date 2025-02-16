#include <stdio.h>

void binary(int num){
    if(num>1){
        binary (num/2);
    }
    printf("%d",num%2);
}

int main(){
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("0");
    }
    else{
        binary(a);
    }
    return 0;
}