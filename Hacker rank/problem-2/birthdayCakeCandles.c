#include <stdio.h>

int main() {
    int i,n;
    long long int arr[100000],max=0,count=0;

    scanf("%lld",&n);

    for(i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(max==arr[i]){
            count++;
        }
    }

    printf("%lld", count);
    return 0;
}

