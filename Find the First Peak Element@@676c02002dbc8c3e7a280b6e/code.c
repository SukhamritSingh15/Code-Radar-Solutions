#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Case 1: If there's only one element, it's a peak
    if (N == 1) {
        printf("%d", arr[0]);
        return 0;
    }

    // Case 2: Check if first element is a peak
    if (arr[0] > arr[1]) {
        printf("%d", arr[0]);
        return 0;
    }

    // Case 3: Check for peak in the middle
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            printf("%d", arr[i]);
            return 0;
        }
    }

    // Case 4: Check if last element is a peak
    if (arr[N - 1] > arr[N - 2]) {
        printf("%d", arr[N - 1]);
        return 0;
    }

    // No peak found
    printf("-1");
    return 0;
}
