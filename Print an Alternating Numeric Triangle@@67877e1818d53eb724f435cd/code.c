#include <stdio.h>

int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {         // Rows
        for(int j = 1; j <= i; j++) {     // Columns in each row
            printf("%d ", (i + j) % 2);   // Alternates 1 and 0
        }
        printf("\n");                     // Move to next row
    }

    return 0;
}
