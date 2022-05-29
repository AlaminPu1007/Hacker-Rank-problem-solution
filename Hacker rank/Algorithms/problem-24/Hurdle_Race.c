#include <stdio.h>

int main() {
    int N, i, k;
    int max = 0, value;
    scanf("%d%d", &N, &k);
    for(i = 0; i < N; i++)
    {
        scanf("%d",&value);
        if(max < value)
        {
            max = value;
        }
    }
    if(max <= k)
    {
        printf("0\n");
    }else
    {
        printf("%d\n", max - k);
    }

    return 0;
}
