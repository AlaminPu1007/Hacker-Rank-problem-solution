#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum = 0;
    int i,j, counter = 0, k;
     int *arr = (int*)malloc(n * sizeof(int));

    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(i<j){
                sum = arr[i] + arr[j];
                if(sum % k == 0) counter++;
            }
        }
    }

    printf("%d",counter);
    free(arr);

    return 0;
}
