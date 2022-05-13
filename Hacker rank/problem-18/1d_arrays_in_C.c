
#include <stdio.h>
int main()
{
    int sum = 0, i;
    int n;
    scanf("%d",&n);
    int *arr = (int*)malloc(n * sizeof(int));

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);
    free(arr);
    return 0;
}
