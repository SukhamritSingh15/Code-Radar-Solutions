#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[N]);
    }
    for(int i = 0;i<=N-1;i++){
        int count =0;
        for(int j = 0;j<=N-1;j++){
            if(arr[i] ==arr[j]){
                count++;
            }
        }
        if(count>N/2){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}