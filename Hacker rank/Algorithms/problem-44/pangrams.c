
#include <stdio.h>

 int main(void)
 {
     int i, freq[26] = {0}, low = 0, count = 0;
     char str[1000];
     //get string
     scanf("%[^\n]%*c",str);

     for(i = 0; str[i] != '\0'; i++)
     {
         if(str[i] >= 'a' && str[i] <= 'z')
         freq[str[i] - 'a']++;

         else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            /// make an lower case
            low = str[i] + 32;
            freq[ low - 'a']++;
        }
     }

     for(i = 0; i < 26; i++)
     {
         if(freq[i]) count++;
     }

     if(count == 26)
     printf("pangram\n");

     else printf("not pangram\n");

     return 0;
 }
