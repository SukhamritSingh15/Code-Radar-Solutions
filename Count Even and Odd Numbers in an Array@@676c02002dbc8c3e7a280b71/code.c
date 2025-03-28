#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int count =0;
    int odd=0;
    for(int i = 0;i<=N-1;i++){
        scanf("%d",arr[i]);
        if(arr[i]%2 == 0){
            count++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",count,odd);
    return 0;
}