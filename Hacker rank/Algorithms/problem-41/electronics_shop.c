

#include <stdio.h>

int main() {
    int b,n,m, i,j;
    int sum = 0, arr[1000], anotherArr[1000], max = 0;

    scanf("%d%d%d",&b, &n, &m);
    //get store n array value
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // sore m array value
    for(i = 0; i < m; i++)
    {
        scanf("%d", &anotherArr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if( (arr[i] + anotherArr[j]) <= b )
            {
                sum = arr[i] + anotherArr[j];

                if(max < sum)
                max = sum;

            }
        }
    }

    if(max)
    {
        printf("%d\n", max);
    }
    else {
        printf("-1\n");
    }

    return 0;
}
