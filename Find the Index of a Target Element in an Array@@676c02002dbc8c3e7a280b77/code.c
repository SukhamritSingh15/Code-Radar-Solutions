#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    for(int i = 0;i<=N-1;i++){
        printf("%d",arr[T]);
    }
    return 0;
}