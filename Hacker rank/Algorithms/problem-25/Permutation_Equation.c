#include <stdio.h>
int main(void)
{
    int N,p = 0,arr[50],i;
    int j, copyArr[50], c = 0;

    ///get size from user
    scanf("%d", &N);
    ///loop through N
    for( i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    for( i = 1; i <= N; i++)
    {
       ///get x value
       for( j = 0; j < N; j++)
       {
           if( i == arr[j])
           {
               p = j + 1;
               copyArr[c++] = j+1;

              /// printf("p = %d \t", p);
               ///printf("arr[j] = %d", arr[j]);
           }
       }
    }

    for( i = 0; i < c; i++)
    {
       // printf("copy arr = %d \n",copyArr[i]);
        p = copyArr[i];

        for( j = 0; j < c; j++)
       {
           if( p == arr[j])
           {

               printf("%d\n", j+1);
           }
       }
    }
    return 0;
}
