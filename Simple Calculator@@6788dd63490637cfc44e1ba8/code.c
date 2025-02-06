#include <stdio.h>
int main(){
    int a,b;
    char ch;
    scanf("%d\n", &a);
    scanf("%d\n", &b);
    scanf(" %c\n", &ch);
    switch(ch){
        case '+':
        printf("%d\n",a+b);
        break;
        case '-':
        printf("%d\n",a-b);
        break;
        case '*':
        printf("%d\n",a*b);
        break;
        case '/':
        if (b!=0){
            printf("%d\n",a/b);
        }else{
            printf("error\n");
        }
        break;
        default:
        printf("error:invalid operator");
    }return 0;
}