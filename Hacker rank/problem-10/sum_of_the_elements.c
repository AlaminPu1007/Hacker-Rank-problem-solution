
#include <stdio.h>
int main(){

    int a[10], size, i;
    long long int sum = 0;
    scanf("%d", &size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++){
        sum+=a[i];
    }

    printf("%lld",sum);

return 0;
}
