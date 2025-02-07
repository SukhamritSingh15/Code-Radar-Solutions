#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int z=1;z<=i;z++){
            printf("* %d\n",z);
        }
    }
    return 0;
}