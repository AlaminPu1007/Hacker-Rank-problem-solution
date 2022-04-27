#include <stdio.h>
int main()
{
   int arr[1000], sum=0,i, size;
   scanf("%d",&size);
   for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }

   for(i=0;i<size;i++){
    sum = sum + arr[i];
   }
   printf("%d", sum );

    return 0;
}
