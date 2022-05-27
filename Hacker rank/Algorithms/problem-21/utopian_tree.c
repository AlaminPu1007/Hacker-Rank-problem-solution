#include <stdio.h>

int main(){
    int t;

    // get number of test case from user
    scanf("%d",&t);

    while(t > 0)
    {
        int  i, sum = 0, n;
        scanf("%d", &n);

        for(i = 0; i <= n; i++)
        {
            if(i%2==0)
            sum = sum + 1;
            else sum = sum * 2;
        }
        printf("%d\n", sum);
        t--;
    }
    return 0;
}

