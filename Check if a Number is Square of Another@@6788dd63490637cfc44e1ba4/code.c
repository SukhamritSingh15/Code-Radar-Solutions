#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d",&a,&b);
    if((a*a)==sqrt(b)){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}