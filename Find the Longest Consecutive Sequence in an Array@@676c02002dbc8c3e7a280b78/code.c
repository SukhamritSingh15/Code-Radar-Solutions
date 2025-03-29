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
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 1,longest = 1;

    for(int i = 1;i<=N-1;i++){
        if(arr[i] == arr[i-1]+1){
            count++;
        }
        else if(arr[i] !=arr[i-1]){
            if(count>longest) longest = count;
            count = 1;
        }
    }
    if(count>longest) longest = count;
    printf("%d ",longest);
    return 0;
}