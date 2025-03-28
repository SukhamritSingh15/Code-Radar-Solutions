#include <stdio.h>
int palindrome(int arr[],int size,int N){
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
    int size = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0;i<size;i++){
        scanf("%d",&arr[N]);
    }
    if(palindrome(arr,size)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}