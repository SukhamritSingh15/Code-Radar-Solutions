#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[N]);
    }
    int max = -1;
    for(int i = N-1;i>=0;i--){
        int temp = arr[i];
        arr[i] = max;
        if(temp>max){
            max = temp;
        }
    }
    for(int i = 0;i<=N-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}