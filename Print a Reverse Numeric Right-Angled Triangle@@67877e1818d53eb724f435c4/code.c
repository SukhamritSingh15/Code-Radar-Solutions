#include <stdio.h>

int main(){
    int a;
    scnaf("%d", &a);
    for (int i =a;i<=a;i--){
        for(int j = 1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}