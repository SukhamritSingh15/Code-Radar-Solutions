#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    
    int max = arr[N-1];
    printf("%d ", max); 

    for(int i = N-2; i <= 0; i++){
        if(arr[i] >= max){
            max = arr[i];
            printf("%d ", arr[i]); 
        }
    }
    
    printf("\n"); 
    return 0;
}
