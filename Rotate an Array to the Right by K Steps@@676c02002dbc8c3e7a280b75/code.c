#include <stdio.h>
int reverse(int arr[],int st,int re){
    for(int i = st,j = re;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int K;
    K = K%N;
    reverse(arr,0,N-1); 
    reverse(arr,0,K-1); 
    reverse(arr,K,N-1);

    for(int i = 0;i<=N-1;i++){
        printf("%d",arr[i]);
    } 
    return 0;
}