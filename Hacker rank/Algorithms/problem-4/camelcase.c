#include <stdio.h>
#include <string.h>

int main()
{
    int i,counter = 0;
    char arr[100000];

    scanf("%[^\n]%*c",arr);
    for(i=0; arr[i] != '\0'; i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z'){
            counter++;
        }
    }

    printf("%d",counter+1);

    return 0;
}
