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

                for(int k = j+1;k<=N-1;k++){
                    if(arr[k] == arr[j]) j++;
                    else break;
                }
            }
        }
    }
    return 0;
}