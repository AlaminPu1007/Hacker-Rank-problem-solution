#include <stdio.h>
#include <math.h>

int main(void)
{
    long long t;

    scanf("%lld", &t);

    while(t > 0)
    {
        long long int result = 0, first = 0, mod = 0;
        long long n,c,m;

        scanf("%lld%lld%lld", &n,&c,&m);

         first =  n / c;
         result = first;

        while(first >= m)
        {

            result ++;
            first = first - m + 1;

        }

        printf("%lld\n",result);

        t--;
    }
    return 0;
}

