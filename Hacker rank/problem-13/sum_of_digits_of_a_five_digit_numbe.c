#include <stdio.h>
int main()
{
    int i, sum = 0, rev = 0, N;
    int copy = 0;
    //
    scanf("%d",&N);

    copy = N;

    while(N != 0){
        rev = N % 10;
        sum = sum + rev;
        N = N / 10;
    }
    printf("%d", sum);

    return 0;
}
