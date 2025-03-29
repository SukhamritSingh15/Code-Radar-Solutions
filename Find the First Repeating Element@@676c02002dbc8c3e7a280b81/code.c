#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",arr[N]);
    }
    for(int i = 0;i<=N-1;i++){
        for(int j = i+1;j<=N-1;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}