#include <stdio.h>
#include <limits.h>
#include <stdlib.h>  

int main() {
    int N;
    scanf("%d", &N);
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int minDiff = INT_MAX, num1, num2;

    for (int i = 0; i < N - 1; i++) {
        int diff = abs(arr[i + 1] - arr[i]);  
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2);
    return 0;
}
