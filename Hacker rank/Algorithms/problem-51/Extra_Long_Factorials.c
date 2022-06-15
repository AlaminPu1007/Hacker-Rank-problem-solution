#include <stdio.h>

int main(void)
{
    int arr[200], i, j, size = 0, temp = 0, n;
    scanf("%d", &n);

     arr[0] = 1;

    for(i = 2; i <=n ; i++)
    {
        temp = 0;
        for(j = 0; j <= size; j++)
        {
            temp = (arr[j] * i) + temp;
            arr[j] = temp % 10;
            temp /= 10;
        }

        while(temp > 0)
        {
            arr[++size] = temp % 10;
            temp = temp / 10;
        }
    }

    for(i = size; i >= 0 ; i--)
        printf("%d",arr[i]);

    printf("\n");

    return 0;
}
