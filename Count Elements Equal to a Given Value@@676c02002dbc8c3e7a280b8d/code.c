#include<stdio.h>
int main(){
    int N,K;
    scanf("%d %d",&N,&K);
    int arr[N];
    int count = 0;
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        if(arr[i]==arr[j]){
            count++;
        }
        
    }
    
    printf("%d",count);
    

    return 0;
}