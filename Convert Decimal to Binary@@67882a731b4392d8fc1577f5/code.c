#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    
    for(int i =31;i>=0;i--){
        printf("%d",(a>>i)&1);
    }
    return 0;
}