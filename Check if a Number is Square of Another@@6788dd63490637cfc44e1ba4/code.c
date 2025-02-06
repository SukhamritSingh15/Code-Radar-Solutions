#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d",&a,&b);
    if(sqrt(a)==(b*b)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}