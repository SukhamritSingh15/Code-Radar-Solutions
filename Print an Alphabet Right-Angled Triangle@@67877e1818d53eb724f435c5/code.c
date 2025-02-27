#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    for(int i = 1;i<=a;i++){
        for(int j = i;j<=i;j++){
            printf("%c " ,a );
        }
        printf("\n");
    }
    return 0;
}