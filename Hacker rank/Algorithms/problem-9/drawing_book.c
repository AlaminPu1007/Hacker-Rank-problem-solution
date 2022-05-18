
#include <stdio.h>

int main() {

    int n=0,p=0, value = 0;
    scanf("%d%d",&n, &p);

    value = (n/2) - (p/2);
    if(value > (p/2))

    value = (p/2);

    printf("%d",value);

    return 0;
}
