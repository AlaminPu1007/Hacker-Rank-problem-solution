#include <stdio.h>

int main() {
    int t,n,c,s;
    int i;

    scanf("%d",&t);

   while(t > 0){

        scanf("%d%d%d",&n,&c,&s);
        printf("%d\n",(s+c-2)% n + 1);
        t--;
    }

    return 0;
}
