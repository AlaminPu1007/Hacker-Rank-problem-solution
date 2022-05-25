#include <stdio.h>
int main()
{
    int x1,v1,x2,v2;
    //get input from user
    scanf("%d%d%d%d",&x1,&v1,&x2,&v2);
    if( x2 > x1 && v2 >= v1){
         printf("NO\n");
    }
    else if( ((x2 - x1) % (v1 - v2) == 0) && (v2-v1) != 0 ){
        printf("YES\n");
    }else {
        printf("NO\n");
    }
    return 0;
}
