#include <stdio.h>
#include <math.h>


int main(){
    double base,perpendicular;
    printf("enter base");
    scanf("%lf",&base);
    printf("enter perpendicular");
    scanf("%lf",&perpendicular);
    double C = sqrt((base*base) +(perpendicular*perpendicular));
    printf("%lf",C);
    return 0;
}

