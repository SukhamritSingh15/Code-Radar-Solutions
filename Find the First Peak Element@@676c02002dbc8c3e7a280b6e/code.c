#include <stdio.h>

int findFirstPeak(int arr[], int N) {
    // If there is only one element, it's a peak
    if (N == 1) return arr[0];

    // Check the first element
    if (arr[0] > arr[1]) return arr[0];

    // Check middle elements
    for (int i = 1; i < N - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // First peak found
        }
    }

    // Check the last element
    if (arr[N - 1] > arr[N - 2]) return arr[N - 1];

    return -1; // No peak found
}

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int peak = findFirstPeak(arr, N);
    printf("%d\n", peak);

    return 0;
}
