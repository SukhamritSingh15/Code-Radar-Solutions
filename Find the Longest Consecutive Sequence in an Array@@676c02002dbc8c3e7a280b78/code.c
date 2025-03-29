#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    // Read input
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 1: Sort the array
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Step 2: Find the longest consecutive sequence
    int longest = 1, current = 1;

    for (int i = 1; i < N; i++) {
        if (arr[i] == arr[i - 1] + 1) {  
            current++; // Increase count if consecutive
        } else if (arr[i] != arr[i - 1]) {
            if (current > longest) longest = current;
            current = 1; // Reset for a new sequence
        }
    }

    // Final check for last sequence
    if (current > longest) longest = current;

    printf("%d\n", longest);
    return 0;
}
