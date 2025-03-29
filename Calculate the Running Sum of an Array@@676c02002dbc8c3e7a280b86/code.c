#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int sum = 0;
    for(int i =0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    return 0;
}