#include <stdio.h>
int main(){
    int a[100], b[100], result1 = 0, result2 = 0, i, j;
    int size = 0;
   // scanf("%d",&size);

    for(i=0;i<3;i++){
        scanf("%d", &a[i]);
    }

    for(j=0;j<3;j++){
        scanf("%d", &b[j]);
    }

    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            // alice got 1 point
            result1 += 1;
        }else if(a[i]<b[i]){
            result2 += 1;
        }
    }

    printf("%d %d", result1, result2);

return 0;

}

