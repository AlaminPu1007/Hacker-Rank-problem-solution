
#include <stdio.h>
int main()
{
    int N, i, uc = 1, lc = 1, nu = 1, sy = 1;
    int ans = 0;

    ///get input from user
    scanf("%d", &N);
    char arr[N];

    scanf("%s",arr);
    for(i = 0; arr[i]!= '\0'; i++)
    {


        if(arr[i] >= 'A' && arr[i] <= 'Z')
        {
            uc = 0;
            //printf("UPPER = %c \n",arr[i]);

        }
        else if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            lc = 0;
        }
        else if(arr[i] >= '0' && arr[i] <= '9')
        {
            nu = 0;
        }
        else {
            sy = 0;
        }
    }
    //printf("%d%d%d%d",uc,lc,nu,sy);

    if( (uc + lc + nu + sy + N) < 6)
    {
        ans = 6 - (uc+lc+nu+sy+N);
    }else
    {
        ans = 0;
    }
     if( (nu + lc + uc + sy + N) < 6)
        {
       ans = 6 - (nu + lc + uc + sy + N) ;
      }
     else ans = 0;

    printf("%d\n",(nu + lc + uc + sy + ans));

    return 0;
}
