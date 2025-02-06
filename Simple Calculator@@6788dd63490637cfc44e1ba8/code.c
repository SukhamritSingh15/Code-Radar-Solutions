#include <stdio.h>

int main(){
    int a,b;
    char sign;
    scanf("%d%d%c",&a,&b,&sign);
    switch(sign){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d",a-b);
        break;

        case '*':
        printf("%d",a*b);
        break;

        case '/':
        if(b!=0){
            printf("%d",a/b);
        }
        else{
            printf("error");
        }
        break;
        
        default:
        printf("error:invalid operator");
    }
    return 0;
}