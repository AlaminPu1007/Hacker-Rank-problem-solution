#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t > 0)
    {
        char str[10000];

        scanf("%s",str);

        int len = 0;

        len = strlen(str);
        int j = len - 1, value = 0, i;
        for(i = 0; i < len/2; j--, i++)
        {
            if(str[i] != str[j])
            {
                value += abs(str[i] - str[j]);
            }
        }

        if(value)
        {
            printf("%d\n",value);
        }
        else {
            printf("0\n");
        }

        t--;
    }




    return 0;
}
