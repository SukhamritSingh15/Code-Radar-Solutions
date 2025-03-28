#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=N-1;i++){
        int num = arr[i],isprime = 1;
        if(num<2) isprime = 0;

        for(int j = 2;j*j<=num;j++){
            if(num%j==0){
                isprime =0;
                break;
            }
        } 
    if(isprime){
        printf("%d ",num);
    }
    return 0;
    }
}