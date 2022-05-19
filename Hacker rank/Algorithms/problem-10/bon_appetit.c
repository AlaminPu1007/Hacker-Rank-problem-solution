#include <stdio.h>
#include <stdlib.h>

int main()
{
    //k - is the number of item that anna did not eaten
    //b - is the amount that anna will give
    int n, k, b;
    int i, sum = 0, value = 0;
    ///get input from user
    scanf("%d%d",&n,&k);
    ///make a dynamic array
    int* arr = (int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++){

        scanf("%d", &arr[i]);

        if(i != k){
            sum += arr[i];
        }
    }
    scanf("%d",&b);

    sum = sum / 2;
    if(b == sum ){
        printf("Bon Appetit\n");
    }else {
        if((sum - b) > 0){
            printf("%d",sum - b);
        }else {
             printf("%d",(sum - b) * (-1));
        }


    }



    //free array after successfully execution
    free(arr);
    return 0;
}
