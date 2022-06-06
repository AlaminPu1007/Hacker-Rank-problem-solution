#include <stdio.h>
#include <math.h>

// method to handle minimum value
int Min(int arr[], int c)
{
    int i, min = 0;
    ///initial state of min value
    min = arr[0];

    for(i = 0; i < c; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int main(void)
{
    int arr[100000], i, j, count = 0, min = 0;
    int n, c = 0, copyArr[100];

    //get size of array value
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                //printf("arr[i] = %d\t arr[j] = %d\n", arr[i],arr[j]);
                copyArr[c] = abs(i - j);
                c++;
            }
        }
    }

    if(c){
        printf("%d\n", Min(copyArr, c));
    }
    else {
        printf("-1\n");
    }




    return 0;
}
