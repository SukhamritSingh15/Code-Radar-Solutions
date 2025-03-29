#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int pairs = 0;

    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);

    for(int i = 0;i<=N-1;i++){
        for(int j = i+1;j<=N-1;j++){
            if(arr[i]+arr[j]==T){
                pairs++;
                printf("%d %d\n",arr[i] , arr[j]);
            }
        }
    }
    return 0;
}