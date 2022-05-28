#include <stdio.h>
#include <math.h>
int main()
{
    long long int t, a, b, ans = 0;
    scanf("%lld",&t);

    while(t > 0)
    {
        scanf("%lld%lld",&a, &b);

        ans = (floor(sqrt(b)) - ceil(sqrt(a))) + 1;

        printf("%lld\n",ans);

        t--;
    }
    return 0;
}
