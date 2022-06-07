#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    int arr[N], i, value = 0, j;

    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=1;i<N;i++)
    {
        value = arr[i];
        j=i-1;

        while (value < arr[j] && j >= 0) {
          arr[j + 1] = arr[j];
          --j;
        }

        arr[j+1]=value;
    }

    for(i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
