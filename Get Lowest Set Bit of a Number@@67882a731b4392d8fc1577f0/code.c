#include <stdio.h>

int main() {
    int num, pos = 0;
    scanf("%d", &num);

    if (num == 0) {
        printf("-1");  // No set bit in 0
        return 0;
    }

    while ((num & 1) == 0) {  // Shift right until the first '1' is found
        num >>= 1;
        pos++;
    }

    printf("%d", pos);
    return 0;
}
