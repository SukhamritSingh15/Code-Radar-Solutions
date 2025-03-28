#include <stdio.h>
int reverse(int arr[],int i = st,int j=re){
    for(int i = st,int j = re;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int K;
    scanf("%d",&K);
    reverse(arr,0,N-1);
    reverse(arr,0,K-1);
    reverse(arr,K,N-1);
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[N]);
        printf("%d",arr[i]);
    }
    return 0;
}