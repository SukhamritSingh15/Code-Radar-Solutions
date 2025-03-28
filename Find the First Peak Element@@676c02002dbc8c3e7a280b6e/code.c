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

    int max = INT_MIN, smax = INT_MIN;

    // Find max and second max
    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            smax = max;
            max = arr[i];
        } else if (arr[i] > smax && arr[i] != max) {
            smax = arr[i];
        }
    }

    // If no second largest element, return -1
    if (smax == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", smax);
    }

    return 0;
}
