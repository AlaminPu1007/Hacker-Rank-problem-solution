

#include <stdio.h>

int main() {
    long long int i, j;
    long long int n, len = 0, extra = 0, count = 0;
    char str[100];

    // it will take input untill new line is enter
    scanf("%[^\n]%*c", str);


    // get string length
    scanf("%lld", &n);


    // find string length
    for(i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    long long int divisible = n / len;
    long long int mod = n % len;


    for(i = 0; i < len; i++)
    {
       if(str[i] == 'a')
       count++;
    }

    // for mod value
    if(mod)
    {
        for(i = 0; i < mod; i++)
        {
            if(str[i] == 'a')
            extra++;

        }
    }

    divisible = (divisible * count) + extra;

    printf("%lld\n", divisible);

    return 0;
}
