#include <stdio.h>

int main() {
    int t;
    int arr[10000];

    scanf("%d",&t);

    while(t > 0){

    int n, i, j, count = 0, k;

    scanf("%d%d",&k, &n);

    for(i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(count){
            break;
        }
        for( j = i + 1; j < n; j++){
            if( (arr[i] + arr[j]) == k){
                printf("%d %d\n",i + 1 , j + 1);
                count++;
                break;
            }
        }
    }

        t--;
    }

    return 0;
}
