#include <stdio.h>
#include <math.h>


/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[1000], i;
    long sum = 0, makePow = 1;
    int n;

    scanf("%lld",&n);

    //take input from user
    for(i = 0; i < n; i++)
    scanf("%d",&arr[i]);

    // insertin sort method
    insertionSort(arr, n);

    //sum = (arr[0]);

    for( i = 0; i < n; i++)
    {
        // printf("makePow = %d\n",makePow );
        // make 2 power here
        //makePow = abs(makePow * 2);
        sum = sum + (arr[i]*(pow(2,i)));
        // printf("sum = %d, arr[i] = %d, makePow = %d\n",sum ,arr[i] , makePow );
    }

     printf("%ld\n",sum);

    return 0;
}
