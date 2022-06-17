#include <stdio.h>

int main(void)
{
    int n,arr[10000], count = 0, sum = 0, i;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    if(sum % 2 == 1)
    {
        printf("NO\n");
        return 0;
    }
    else {
        for(i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                arr[i] = arr[i] + 1;
                arr[i + 1] = arr[i + 1] + 1;
                count += 2;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
