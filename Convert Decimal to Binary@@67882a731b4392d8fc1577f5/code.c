#include <stdio.h>

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);  // Recursive call
    }
    printf("%d", num % 2);  // Print the last binary digit
}

int main() {
    int a;
    scanf("%d", &a);

    if (a == 0) {
        printf("0");
    } else {
        printBinary(a);
    }

    return 0;
}
