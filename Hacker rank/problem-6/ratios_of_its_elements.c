#include <stdio.h>
int main(){

    int a[100], size, i;
    double positive = 0, negative = 0, equal = 0;
    float   p, n, e;
    scanf("%d", &size);

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++){
        if(a[i]<0){
            negative++;
        }else if(a[i]>0){
            positive++;
        }else if(a[i]==0) equal++;
    }

    p = positive / size;
    n = negative / size;
    e = equal / size;

    printf("%f\n %f\n %f\n", p,n,e);

    return 0;
}
