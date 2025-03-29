#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    int max = 0,maxelement,count;
    for(int i = 0 ;i<=N-1;i++){
        count = 0;
        for(int j = 0;j<=N-1;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            max = count;
            maxelement = arr[i];
        }

    }
    printf("%d",maxelement);
    return 0;
}