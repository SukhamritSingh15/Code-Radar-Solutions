#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int T;
    scanf("%d", &T);

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] + arr[j] == T){
                printf("%d %d\n", arr[i], arr[j]);

                while(j + 1 < N && arr[j] == arr[j + 1]){
                    j++;
                }
            }
        }

        while(i + 1 < N && arr[i] == arr[i + 1]){
            i++;
        }
    }

    return 0;
}
