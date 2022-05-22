#include <stdio.h>

int main()
{
    long m, n, k, i;
    long counter = 0, sub = 0;

    ///get input from user
    /// m = start value, n = end value, k = divisible value
    scanf("%ld%ld%ld", &m,&n,&k);

    for(i = m; i <= n; i++){
        int mod = 0, sum = 0, copy = 0;
        int reverse = 0;
        copy = i;
        while(copy != 0)
        {
            mod = copy % 10;
            reverse = reverse * 10 + mod;
            copy /= 10;
        }

        ///sub from actual value
        sub = i - reverse;
        if(sub % k == 0){
            counter++;
        }
    }

    ///get actual output
    printf("%ld", counter);

    return 0;
}
