#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}