#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    for(int i = 1;i<=a;i++){
        for(int j = 1;j<=i;j++){
            printf("%c " ,j );
        }
        printf("\n");
    }
    return 0;
}