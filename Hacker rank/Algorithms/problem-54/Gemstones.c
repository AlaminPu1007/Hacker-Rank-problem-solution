
#include <stdio.h>


int main(void)
{
    int n, result = 0;
    scanf("%d", &n);

    int freq[100][26] = {0}, i, j, count = 0;
    char str[100][100];

    for(i = 0; i < n; i++)
    {
        char ch;

        scanf("%s",str[i]);

        for(j = 0; str[i][j] != '\0'; j++)
        {
            ch =  str[i][j] - 'a';

            freq[i][ch] = 1;
        }
    }

    for(i = 0; i < 26; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(freq[j][i])
            {
                count++;
            }

        }

        if(count == n)
        {
            result++;
        }
    }

    printf("%d\n",result);

    return 0;
}
