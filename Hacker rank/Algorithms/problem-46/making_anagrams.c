#include <stdio.h>
#include <math.h>

int main(void)
{
        int i, result = 0, k = 0;
        int freq[26];

        for(i = 0; i < 26; i++) freq[i] = 0;

        char str[100];

        scanf("%s", str);

        for(i = 0; str[i] != '\0'; i++)
        freq[str[i] - 'a']++;

        scanf("%s", str);

        for(i = 0; str[i] != '\0'; i++)
        freq[str[i] - 'a']--;

        for(i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
               result += abs(freq[i]);
            }
        }

        printf("%d\n",result);

        return 0;
}
