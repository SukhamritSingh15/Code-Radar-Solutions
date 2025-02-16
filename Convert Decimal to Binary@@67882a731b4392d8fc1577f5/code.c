#include <stdio.h>

void binary(int num){
    if(num>1){
        binary (num/2);
    }
    printf("%d",num%2);
}

int main(){
    return 0;
}