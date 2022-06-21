#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t > 0)
    {
        char str[100000];
        int i, count = 0;

        scanf("%s",str);

        int len = 0;
        len = strlen(str);

        for(i = 0; i < len - 1; i++)
        {
            if(str[i] == str[i + 1])
            {
                count++;
            }
        }

        printf("%d\n", count);

        t--;
    }



    return 0;
}
