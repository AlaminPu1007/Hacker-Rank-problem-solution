
#include <stdio.h>
#include <math.h>

int main() {

    int N;

    char arr[10000];

    scanf("%d", &N);

    while(N > 0)
    {
        int i, j, count = 0, c = 0, tempArr[10000];
        int tempArr2[10000], d = 0, flag = 0;

        scanf("%s",&arr);

        for(i = 0; arr[i] != '\0'; i++)
        {
            count++;
        }

        for(i = 0; i < count - 1; i++)
        {
            int value1 = abs(arr[i]);
            int value2 = abs(arr[i+1]);

            //printf("value1 = %d\n", value1);
            //printf("value2 = %d\n", value2);

            tempArr[c]= abs(value2 - value1);
            c++;

        }

        for(i = count - 1; i >= 0; i--)
        {

            int value1 = abs(arr[i]);
            int value2 = abs(arr[i-1]);
            tempArr2[d]= abs(value1 - value2);
            d++;
        }


        for(i = 0; i < c; i++)
        {
             if( abs(tempArr[i]) != abs(tempArr2[i]))
             {
                flag++;
                break;
             }
        }

        if(flag == 0)
        {
            printf("Funny\n");
        }
        else {
            printf("Not Funny\n");
        }
        N--;
    }

    return 0;
}

