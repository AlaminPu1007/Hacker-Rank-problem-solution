
#include <stdio.h>
int main()
{
    int arr[1000], i, max = 0, min = 0, N;
    int maxCounter = 0, minCounter = 0;
    //get size of an array
    scanf("%d",&N);
    //get input form user
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
        if(i == 0){
            max = arr[0];
            min = arr[0];
        }

        if(max > arr[i]){
                max = arr[i];
            maxCounter++;
        }else if(min < arr[i]) {
            min = arr[i];
            minCounter++;
        }
    }
    printf("%d %d", minCounter, maxCounter);

    return 0;
}
