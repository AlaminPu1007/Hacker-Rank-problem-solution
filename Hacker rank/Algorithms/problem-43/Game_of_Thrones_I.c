#include <stdio.h>

int main(void)
{
    int len = 0, count = 0, i;
    //define frequency array
    // inside of this array we put each single character frequency
    int freq[26]; // initialize with zero

    char str[1000001];
    /// get value from user
    scanf("%[^\n]%*c", str);

    for(i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        // we put each character with their frequency
        freq[str[i] - 'a']++;
        len++;
    }

    for(i = 0; i < 26; i++)
    {

       //check it possible to make palindrome or not
       if(freq[i] % 2 == 1)
       {
           count++;
       }
    }

    if( len % 2 == 1 )
    {
        if(count == 1)
        {
            printf("YES\n");
            return 0;
        }
    }
    else {

        if(count == 0) {
            printf("YES\n");
            return 0;
        }
     }
        printf("NO\n");


    return 0;
}
