#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int t, i, j, k, l;
    scanf("%d", &t);
    while (t--)
    {
        long int n;
        scanf("%ld", &n);
        long long int *arr = malloc(sizeof(long long int) * n);
        long long int max = 0;
        long long int c = 1;
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        max = arr[0];
        for (i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                c++;
            }
        }
        if (c % 2 == 0)
            printf("ANDY\n");
        else
            printf("BOB\n");
        free(arr);
    }
    return 0;
}
