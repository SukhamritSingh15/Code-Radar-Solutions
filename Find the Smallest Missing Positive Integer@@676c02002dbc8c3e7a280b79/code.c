#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int count =0;
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        if(arr[i]>=0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}