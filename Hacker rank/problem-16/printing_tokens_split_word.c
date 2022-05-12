#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    int i;
    scanf("%[^\n]%*c", arr);

    for(i=0;arr[i] != '\0';i++){
        if(arr[i] != ' '){
            printf("%c",arr[i]);
        }else {
            printf("\n");
        }
    }

    return 0;
}
