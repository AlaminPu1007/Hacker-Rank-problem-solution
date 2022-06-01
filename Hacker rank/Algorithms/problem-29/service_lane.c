
#include <stdio.h>

int Min(int *arr, int a, int b)
{
    int i, min = 0;
    //define initial min value
    min = arr[a];

    for(i = a; i <= b; i++)
    {
        //printf("arr[i] = %d \t", arr[i]);
        if( min > arr[i])
        {
            min = arr[i];
        }
    }
    //printf("Min = %d\n", min);
    return min;
}

int main() {
    int n,t,i ,arr[100000];
    int a,b;

    //get n and t value from user
    scanf("%d%d",&n,&t);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    // loop for t
    for(i = 0; i < t; i++)
    {
        scanf("%d %d",&a, &b);
        /// print the minimm value
        printf("%d\n",Min(arr, a, b));
    }

    return 0;
}

