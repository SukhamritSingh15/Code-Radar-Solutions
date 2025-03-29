#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int increasing = 1;decreasing = 1;
    for(int i = 0;i<=N-1;i++){
        if(arr[i]>arr[i-1]) decreasing = 0;
        if(arr[i]<arr[i-1]) increasing = 0;
    }
    if(increasing || decreasing){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}