#include <stdio.h>
#include <string.h>
int main()
{

    int i, arr[26], value, counter = 0;
    int max = 0;
    char str[10];

    for(i = 0; i < 26; i++)
    {
        scanf("%d", &arr[i]);
    }
    /// get string from user
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        // get position of later
        value = str[i] - 97;

        if(max < arr[value])
        {
            max = arr[value];
        }
        //count length of string
        counter++;
    }
    //get actual output
    printf("%d\n",max*counter);

    return 0;
}
