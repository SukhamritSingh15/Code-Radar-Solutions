#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i = 0;i<=N-1;i++){
        int num = abs(arr[i]);
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2){
            max2 = arr[i];
        }
    }
    printf("%d ",max1*max2);
    return 0;

}