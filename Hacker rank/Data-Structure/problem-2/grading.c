#include <stdio.h>

int main() {
    int i,n,arr[100];
    int dev = 0, mod = 0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i] < 38 ) {
            printf("%d\n",arr[i]);
        }else{
            mod = arr[i] % 5;

            if(mod){
                dev = 5 - mod;
                if(dev < 3){
                    printf("%d\n",arr[i] + dev);
                }
                else{
                 printf("%d\n",arr[i]);
                }
            }else{
                printf("%d\n",arr[i]);
            }
        }
    }

    return 0;
}
