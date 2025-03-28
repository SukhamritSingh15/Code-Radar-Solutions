#include <stdio.h>
int rotate(int arr[],int st,int re){
    for(int i = st,j = re;i<j;i++,j--){
        int temp = int[i];
        int[i] = int[j];
        int[j] = temp;
    }
}
int main(){
    int n;
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