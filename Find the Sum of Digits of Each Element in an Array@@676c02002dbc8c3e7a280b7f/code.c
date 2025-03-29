#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int sum = 0;
    int num = arr[i];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        while(num>0){
            sum += num%10;
            num/=10;
        }
    }
    printf("%d ",sum);
    return 0;
}
