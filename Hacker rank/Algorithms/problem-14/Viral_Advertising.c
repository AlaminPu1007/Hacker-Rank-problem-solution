#include <stdio.h>
#include <stdlib.h>

int main()
{
    long i, n, count = 2, sum = 2;
    ///get input from user
    scanf("%ld",&n);
    ///define dynamic array
    long* arr =  (long*) malloc(n * sizeof(long));

    for(i = 1; i < n; i++){
        ///we will get from this method
        /// 3,4,6,9,13,19,28....n
        sum = (sum * 3) / 2;
        count += sum;
    }

    ///print the actual output
    printf("%ld",count);
    ///free our array
    free(arr);


    return 0;

}
