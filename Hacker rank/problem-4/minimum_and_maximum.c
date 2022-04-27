#include <stdio.h>

int main() {
    int i;
    long long int arr[5],max=0,min,sum=0;

    for(i=0;i<5;i++){
        scanf("%lld",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
        sum+=arr[i];
    }

    min =arr[0];
    for( i=0;i<5;i++)
        {
        if(arr[i]<min)
            min=arr[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
