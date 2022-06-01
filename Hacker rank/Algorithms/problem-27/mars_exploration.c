
#include <stdio.h>

int main() {
    int count = 0, i;
    char str[1000], arr[]={'S','O','S'};

    scanf("%[^\n]%*c",str);

    for(i = 0; str[i] != '\0'; i++)
    {
       if(arr[i % 3] != str[i])
       {
           count++;
       }
    }

    printf("%d\n", count);

    return 0;
}
