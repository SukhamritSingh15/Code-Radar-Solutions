#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");  // No set bit in zero
    } else {
        printf("%d", num & -num); // Extracts lowest set bit
    }

    return 0;
}
