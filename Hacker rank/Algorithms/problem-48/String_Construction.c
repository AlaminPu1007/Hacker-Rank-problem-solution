
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, n;

    scanf("%d", &n);

    while(n > 0)
    {
        long long freq[26] = { 0 }, count = 0;
        char str[100000];

        scanf("%s",str);

        for(i = 0; str[i] != '\0'; i++)
        {
            freq[str[i] - 'a']++;
        }

        for(i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            count++;
        }
        printf("%lld\n", count);
        n--;
    }

    return 0;
}
