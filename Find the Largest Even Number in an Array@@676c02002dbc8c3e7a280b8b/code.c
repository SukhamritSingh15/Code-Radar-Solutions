#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int  i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        if(i%2==0){
            printf("%d",arr[i]);
        }
    }
    printf("-1");
    return 0;
}