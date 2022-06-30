#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int q;

    //get number of queries
    scanf("%d", &q);

    while(q > 0)
    {
        char str[10000];

        scanf("%s", str);

        int count = 0, str_len = 0, div = 0, i;
        int freq[26] = { 0 };

        //get string length
        str_len = strlen(str);

        if(str_len % 2 != 0)
        {
            printf("-1\n");
        }
        else {

            div = str_len / 2;

            for(i = 0; str[i] != '\0'; i++)
            {
                if(i < div)
                {
                    freq[str[i] - 'a']++;
                }
                else {

                    freq[str[i] - 'a']--;
                }
            }

            for(i = 0; i < 26; i++)
            {
                if(freq[i] < 0)
                {
                    count += abs(freq[i]);
                }
            }

            printf("%d\n", count);

        }

        q--;
   }

    return 0;
}
