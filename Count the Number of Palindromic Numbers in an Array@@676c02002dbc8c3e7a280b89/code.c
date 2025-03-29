#include<stdio.h>
int palindrome(int num){
    int rev = 0,temp=num;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    return num==rev;
}
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int count =0;
    for(int i =0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        count+=palindrome(arr[i]);
    }
    printf("%d",count);
    return 0;
}