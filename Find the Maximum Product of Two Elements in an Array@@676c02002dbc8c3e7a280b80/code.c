#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[N]);
    }
    int max1 = -1000000; max2 = -1000000;
    for(int i = 0;i<=N-1;i++){
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