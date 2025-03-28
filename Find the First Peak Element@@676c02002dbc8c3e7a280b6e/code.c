#include<stdio.h>
#include<limits.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int max = INT_MIN;
    
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}