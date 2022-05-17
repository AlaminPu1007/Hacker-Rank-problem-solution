#include <math.h>
#include <stdio.h>

int main(void)
{
    int s, t, a, b, m, n, i, apple = 0, orange = 0;
    scanf("%d %d\n", &s, &t);
    scanf("%d %d\n", &a, &b);
    scanf("%d %d\n", &m, &n);

    for(i = 0; i < m; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        tmp = a + tmp;

        if(tmp >= s && tmp <= t)
        {
            apple++;
        }
    }

    for(i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        tmp = b + tmp;

        if(tmp >= s && tmp <= t)
        {
            orange++;
        }
    }

    printf("%d\n%d", apple, orange);
}
