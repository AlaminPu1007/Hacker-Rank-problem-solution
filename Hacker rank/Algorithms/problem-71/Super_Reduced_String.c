#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];
    int i, top = -1, len = strlen(str);
    char stack[len];

    scanf("%s", str);

    for (i = 0; str[i] != 0; i++)
    {
        if (top == -1)
        {
            stack[++top] = str[i];
        }
        else if (str[i] == stack[top])
        {
            top--;
        }
        else
        {
            stack[++top] = str[i];
        }
    }

    if (top == -1)
    {
        printf("Empty String\n");
        return 0;
    }

    for (i = 0; i <= top; i++)
        printf("%c", stack[i]);

    return 0;
}