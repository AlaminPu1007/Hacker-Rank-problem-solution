
#include <stdio.h>
int main()
{
    int n, mod = 0, rev = 0, counter = 0;
    int i, arr[15], copy = 0;
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){

        counter = 0;
        /// copy of each item
        copy = arr[i];

        while(copy != 0){
           mod = copy % 10;
           if(mod != 0){
            if(arr[i] % mod == 0){
                counter++;
               }
           }
           copy /=10;
        }
        printf("%d\n",counter);
    }

    return 0;
}
