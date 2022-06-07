
#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, arr[100000],max = 0, i;
    int frq[5] = {0}, value;
    // take input from user
    scanf("%d", &n);

    //store data inside array
    for( i = 0; i < n; i++){
        scanf("%d",&value);
        frq[value-1]++;
    }
    for( i = 0; i < 5; i++){
        if(frq[i] > frq[max]) max = i;
    }

    printf("%d\n",max + 1);

    return 0;
}
