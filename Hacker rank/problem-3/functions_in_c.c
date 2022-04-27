#include <stdio.h>

int max_method(int a, int b, int c, int d){
int max = 0;
if(a > b && a > c && a > d){
    max = a;
}else if(b > a && b > c && b > d){
 max = b;
}else if(c > a && c > b && c > d){
 max = c;
}else if(d > a && d > c && d > b){
 max = d;
}

return max;
}

int main(){
    int a, b, c, d, ans = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
     ans = max_method(a, b, c, d);
    printf("%d", ans);

    return 0;
}
