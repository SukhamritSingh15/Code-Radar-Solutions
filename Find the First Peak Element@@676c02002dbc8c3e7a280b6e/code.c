#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i =0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    if(N==1){
        printf("%d",arr[0]);
        return 0;
    }
    
    if(arr[0]>arr[1]){
        printf("%d",arr[0]);
        return 0;
    }
    
    for(int i = 1;i<N-1;i++){
        if(arr[i]>arr[i-1] &&(arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            return 0;
        }
    }
    
    if(arr[N-1] > arr[N-2]){
        printf("%d",N-1);
        return 0;
    }

    printf("-1");
    return 0;

    return 0;
}