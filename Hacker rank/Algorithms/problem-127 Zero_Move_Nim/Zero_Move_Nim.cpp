
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int g, n, x, s;
    scanf("%d", &g);
    while (g--)
    {
        scanf("%d", &n);
        s = 0;
        while (n--)
        {
            scanf("%d", &x);
            if (x % 2)
                s ^= x + 1;
            else
                s ^= x - 1;
        }
        if (s)
            printf("W\n");
        else
            printf("L\n");
    }
    return 0;
}