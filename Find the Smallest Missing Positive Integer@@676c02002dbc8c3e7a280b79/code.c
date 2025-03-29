#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        for(int j = i+1;j<=N-1;j++){
            if(arr[i]==arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }  
    }
    int missing = 1;
    for(int i = 0;i<=N-1;i++){
        if(arr[i]==missing){
            missing++;
        }
    }
    printf("%d ",missing);
    return 0;
}