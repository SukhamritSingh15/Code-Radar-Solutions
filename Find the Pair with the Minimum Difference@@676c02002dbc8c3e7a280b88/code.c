#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int minDiff = arr[1] - arr[0];
    int num1 = arr[0], num2 = arr[1];

    for (int i = 1; i < N - 1; i++) {
        int diff = arr[i + 1] - arr[i];
        if (diff < minDiff) {
            minDiff = diff;
            num1 = arr[i];
            num2 = arr[i + 1];
        }
    }

    printf("%d %d\n", num1, num2);
    
    return 0;
}
