#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int count = 0;


    for(int i = 0; i < N; i++){
        scanf("%d",&arr[i]);
    }


    for(int i = 0; i < N; i++){
        int num = arr[i], isprime = 1;

        if(num < 2) isprime = 0;  

        for(int j = 2; j * j <= num; j++){
            if(num % j == 0){
                isprime = 0;
                break;
            }
        } 

        if(isprime){  
            count++;  
        }
    }

    printf("%d", count); 
    return 0;
}
