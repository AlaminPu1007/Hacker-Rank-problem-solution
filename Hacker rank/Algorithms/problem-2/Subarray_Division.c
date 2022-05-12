#include <stdio.h>
 int main(){

int m, d,n;
int arr[100];
scanf("%d",& n);

 int count=0;
    int sum=0, i, j;

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&d,&m);

    for( i=0;i<n-(m-1);i++)
    {
        for( j=i;j<m+i;j++)
        {
         sum=sum+arr[j];
        }
        if(sum==d)
        {
        count++;
        }
        sum=0;
    }
    printf("%d",count);
    return 0;
}
