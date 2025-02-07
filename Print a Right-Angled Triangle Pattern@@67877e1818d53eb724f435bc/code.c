#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int z=2;z<=i;z++){
            printf("* %d",z);
        }
    }
    return 0;
}