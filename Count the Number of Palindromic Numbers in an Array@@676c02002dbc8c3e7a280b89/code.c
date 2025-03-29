#include<stdio.h>
int palindrome(int arr[]int start,int end){
    while(start<end){
        if(arr[start]!=arr[end]){
            return 0;
        }
        start++;
        end--;
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
        for(int j = i;j<=N-1;j++){
            if(palindrome(arr,i,j)){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}