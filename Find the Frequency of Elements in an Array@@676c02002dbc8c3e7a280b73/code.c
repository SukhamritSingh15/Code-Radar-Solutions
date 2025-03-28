#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N],freq[N];
    for(int i = 0;i<=N-1;i++){
        scanf("%d",&arr[i]);
        freq[i] = -1;
    }
    for(int i = 0;i<=N-1;i++){
        if(freq[i]==-1){
            int count = 1;
            for(int j = i+1;j<=N-1;j++){
               if(arr[i]==arr[j]){
                    count++;
                    freq[j] = 0;
               }
            }
            printf("%d %d\n",arr[i],count);
        }

    }
    return 0;
}