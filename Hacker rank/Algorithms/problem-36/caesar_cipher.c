
#include <stdio.h>

int main() {

    int i, j, n, k, c = 0, l = 0;
    char str[100], copyStr[100], incStr[100];

    char Alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    // get n value
    scanf("%d", &n);
    // get string
    scanf("%s",str);
    // get k value
    scanf("%d", &k);

    //int divisible = (k / 26);
    int mod = (k % 26);

    //printf("%d \t %d\n",divisible,mod);

    // making increption string first


       for(i = mod; i < 26; i++)
        {
            incStr[c] = Alphabet[i];
            c++;
        }
        // making increption string left portion
        for(i = 0; i < mod; i++)
        {
            incStr[c] = Alphabet[i];
            c++;
        }



    /// making actual string to increption string
    for(i = 0; str[i] !='\0'; i++)
    {
        for(j = 0; Alphabet[j] != '\0'; j++)
        {
            //for small string
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                // if increption string ans actual string are same
                if(str[i] == Alphabet[j])
                {
                    copyStr[l] = incStr[j];
                    l++;
                }
            }
            // for capital string
            else if(str[i] >= 'A' && str[i] <= 'Z')
            {
                if(str[i] == (Alphabet[j] -32) )
                {
                   copyStr[l] = (incStr[j] - 32);
                   l++;
                }

            }
        }
        // push special character inside copy string
        if( (str[i] >= '!' && str[i] <= '@') || (str[i] >= '0' && str[i] <= '9') || (str[i] >= 91 && str[i] <= 96) ||
        (str[i] >= 123 && str[i] <= 126) ){
            copyStr[l] = str[i];
            l++;
        }
    }

    // printf the actual string
    // printf("after increption: ");
    for(i = 0; i < l; i++)
    {
        printf("%c", copyStr[i]);
    }

    printf("\n");

    return 0;
}

