#include <stdio.h>
#include <limits.h>

int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i = 0;i<=N;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]){
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}