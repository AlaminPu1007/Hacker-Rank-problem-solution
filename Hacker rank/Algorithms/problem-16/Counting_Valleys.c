
#include <stdio.h>
int main()
{
    int i, N, count = 0;
    int seaLevel = 0, valley = 0;
    char str[1000000];
    /// get string until new line
    scanf("%d %[^\n]%*c",&N, str);

    for(i = 0; str[i] != '\0'; i++){

        if (str[i] == 'U')
            seaLevel += 1;
        else
            seaLevel -= 1;

        if (str[i] == 'U' && seaLevel == 0)
            valley += 1;
    }

    ///get actual output
    printf("%d\n", valley);

    return 0;
}
