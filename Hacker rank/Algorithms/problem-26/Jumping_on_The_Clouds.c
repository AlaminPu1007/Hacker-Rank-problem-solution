#include <stdio.h>

int main() {

   int i, arr[100];
   int count = 0, N;

   scanf("%d", &N);

   for(i = 0; i < N; i++)
   {
       scanf("%d",&arr[i]);
   }

   for(i = 0; i < N - 1; i++)
   {
       //printf("i out side  = %d\n",i);

       if(arr[i] == 0)
       {
           i++;
           //printf("i inside  = %d\n\n",i);
       }
       //get actual output of it
       count++;
   }
   printf("%d\n",count);

    return 0;
}


