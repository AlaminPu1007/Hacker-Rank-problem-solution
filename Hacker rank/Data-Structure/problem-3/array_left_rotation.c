#include <stdio.h>
int main()
{
    int arr[100000];
    int i, Size, d;

    scanf("%d %d",&Size, &d);

    for(i=0;i<Size;i++){
        scanf("%d",&arr[i]);
    }

    for ( i = 0; i < Size; i++)
    {
      printf("%d ", arr[(i + d) % Size]);
    }

    return 0;
}
