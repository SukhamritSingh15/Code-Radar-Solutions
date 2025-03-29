#include<stdio.h>
int palindrome(int N,int arr[]){
    int i = 0;
    int j = N-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int count = 0;
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        for(int j = i+1;j<=N-1;j++){
            if(palindrome(N,arr)){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}