
#include <stdio.h>

int main() {
   int N, arr[10000];
   int i, j, count = 0;

   scanf("%d",&N);

   for(i = 0; i< N; i++){
       scanf("%d",&arr[i]);
   }

   for (i = 1; i < N; i++) {
    int key = arr[i];
     j = i - 1;
        while (key < arr[j] && j >= 0) {
          arr[j + 1] = arr[j];
          --j;
        count++;
        }
        arr[j + 1] = key;
    }

   printf("%d\n",count);

    return 0;
}

