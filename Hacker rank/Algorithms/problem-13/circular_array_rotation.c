#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// n = size of array, k = rotation of array
    /// q = queries
    long n, k, q, i;
    long value = 0;

    ///get input from user
    scanf("%ld%ld%ld", &n,&k,&q);

    ///get dynamic array
    long* arr =  (long*) malloc(n * sizeof(long));
    long* queries =  (long*) malloc(n * sizeof(long));

    ///get starting position of array to insert value
    int dest = k % n;

    for(i = dest; i < n; i++){
        scanf("%ld",&arr[i]);
    }
    /// remain value will be insert here
    for(i = 0; i < dest; i++){
        scanf("%ld",&arr[i]);
    }
    ///queries value with actual output
    for(i = 0; i < q; i++){
        scanf("%ld",&value);
        printf("%ld\n",arr[value]);
    }

    ///free our array
    free(arr);
    free(queries);
    return 0;
}
