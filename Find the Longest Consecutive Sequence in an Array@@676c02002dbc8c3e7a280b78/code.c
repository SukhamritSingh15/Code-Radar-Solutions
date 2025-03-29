#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Input array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int longest = 1, current = 1;

    // Check for consecutive numbers
    for (int i = 1; i < N; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            current++; // Increase count for consecutive numbers
        } else {
            if (current > longest) longest = current;
            current = 1; // Reset count
        }
    }

    if (current > longest) longest = current; // Update longest sequence

    printf("%d", longest);
    return 0;
}
