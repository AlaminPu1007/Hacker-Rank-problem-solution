#include <stdio.h>

int main()
{
    int v, arr[1000], i, N;

    scanf("%d%d",&v,&N);

    for(i = 0; i < N; i++)
    {

        scanf("%d",&arr[i]);
        if(arr[i] == v)
            printf("%d\n", i);
    }

    return 0;
}
