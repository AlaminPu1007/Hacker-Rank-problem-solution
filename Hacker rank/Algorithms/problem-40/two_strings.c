
#include <stdio.h>

int main() {
    int n, i, j;

    scanf("%d", &n);

    while(n > 0)
    {
        int count = 0, Alphabet[26];
        char str[100000];

        /// initialize all value with zero
        for(i = 0; i < 26; i++)
        {
            Alphabet[i] = 0;
        }

        scanf("%s",str);

        for(i = 0; str[i] != '\0'; i++)
        {
            // put 1 with given string value
            Alphabet[ str[i] - 'a' ] = 1;
        }

        scanf("%s",str);

        for(i = 0; str[i] != '\0'; i++)
        {
            if(Alphabet[ str[i] - 'a' ]){
                printf("YES\n");
                count = 1;
                break;
            }
        }

        if(!count)
        printf("NO\n");

        n--;
    }

    return 0;
}
