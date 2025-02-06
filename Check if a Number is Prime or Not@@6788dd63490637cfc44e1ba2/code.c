#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    if(a<2){
        printf("Not Prime");
        return 0;
    }
    for(int i=2;i<a;i++){
        if(i%n==0){
            printf("Not Prime");
        }
    }
    printf("Prime");
    return 0;
}