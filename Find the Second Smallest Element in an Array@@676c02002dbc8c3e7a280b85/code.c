#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int max = INT_MAX;
    int smax = INT_MAX;
    int arr[N];

    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i<=N-1;i++){
        if(arr[i]<max){
            max =arr[i];
        }
    }
    for(int i = 0;i<=N-1;i++){
        if(arr[i]<smax && arr[i]!=max){
            smax = arr[i];
        }
    }
    if(smax==INT_MAX){
        printf("-1");
    }
    else{
        printf("%d",smax);
    }
    return 0;
}