
#include <stdio.h>

int main() {

    int i, j, N;
    char *arr = "hackerrank";
    char str[10000];

    scanf("%d", &N);

    while(N > 0)
    {
        scanf("%s", str);
        int count = 0, c =0;

        for( i = 0; str[i] !='\0'; i++ )
        {
            if(arr[c] == str[i])
            {
                c++;
                count++;
            }
        }

        if( count == 10 )
        {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

        N--;
    }
}

