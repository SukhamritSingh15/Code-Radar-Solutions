#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int max = arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[N]);
        if(max<arr[N]){
            max = arr[N];
        }
    }
    printf("%d",max);
    return 0;
}