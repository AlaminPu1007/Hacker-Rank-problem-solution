#include <stdio.h>

int main(void)
{
    int i, n, count = 0, j;
    char str[100], ptr [] = "010";

    scanf("%d%s",&n,str);


    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; ptr[j] != '\0'; j++)
        {
            if(str[j + i] != ptr[j])
            break;
        }

        if(j == 3)
        {
            count++;
            i += 2;
        }
    }

    printf("%d\n",count);


    return 0;
}
