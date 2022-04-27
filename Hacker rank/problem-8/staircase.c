#include <stdio.h>
int main(){

    int a[100], n, i,j;
    int space = 0, pattern = 0;
    scanf("%d", &n);
    for(i=0;i<n;i++){

        //print for space
        space = n - (i+1);

        for(j = 0; j <space; j++)
        {
            printf(" ");
        }

        pattern = i + 1;

        for(j = 0; j <pattern; j++)
        {
            printf("#");
        }

        printf("\n");
    }
    return 0;
}
