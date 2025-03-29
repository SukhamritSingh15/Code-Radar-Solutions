#include<stdio.h>
int palindrome(int start,int end,int arr[]){
    while(start<end){
        if(arr[i]!=arr[j]){
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
            if(palindrome(i,j)){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}