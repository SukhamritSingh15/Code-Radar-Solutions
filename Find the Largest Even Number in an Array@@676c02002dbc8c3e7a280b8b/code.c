#include<stdio.h>
#include<limits.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int max = -1;
    for(int  i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        if(arr[i]%2==0){
            if(max==-1||arr[i]>max){
                max = arr[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}