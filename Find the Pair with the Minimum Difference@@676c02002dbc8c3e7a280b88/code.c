#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Read input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = INT_MAX;
    int num1, num2;

    // Find pair with minimum difference
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;  // Absolute difference

            if (diff < minDiff) {
                minDiff = diff;
                num1 = arr[i];
                num2 = arr[j];
            }
        }
    }

    printf("%d %d\n", num1, num2);
    return 0;
}
