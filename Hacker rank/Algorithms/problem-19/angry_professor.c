#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, k, value;

    // number of time the execution will be occur
    scanf("%d",&t);
    // make an dynamic array size
    //int* arr = (int*) malloc(n * sizeof(int));
    while(t > 0){
        // define  every initial time
        int i, sum = 0;
        // take number of student with threshold
        scanf("%d%d",&n,&k);

        if( k > n)
        {
            printf("YES\n");
            return 0;
        }

        for(i = 0; i < n; i++ )
        {
            scanf("%d",&value);
            if(value <= 0){
                sum++;
            }
        }
        // print the actual output
        if( sum >= k) {
            printf("NO\n");
        }else {
            printf("YES\n");
        }
        t--;
    }

    return 0;

}
