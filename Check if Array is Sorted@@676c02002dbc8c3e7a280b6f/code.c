#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[N]);
    }
    for(int i = 1;i<=N-1;i++){
        if(arr[N]<arr[N-1]){
            printf("Not Sorted");
            return 0;
        }
    }
    printf("Sorted");
    return 0;
}