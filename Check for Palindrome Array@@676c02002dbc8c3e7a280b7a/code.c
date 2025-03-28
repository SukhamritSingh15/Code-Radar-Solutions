#include <stdio.h>
int palindrome(int arr[],int N){
    int i = 0;
    int j = N-1;
    while(i<j){
        if(arr[i] !=arr[j]){
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
    for(int i = 0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    if(palindrome(arr,N)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}