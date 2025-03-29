#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int index = 0;
    for(int i = 0;i<=N-1;i++){
        if(arr[i]!=0){
            arr[index++] = arr[i];
        }
    }
    while(arr<N){
        arr[index++] = 0;
    }
    for(int i =0;i<=N-1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}