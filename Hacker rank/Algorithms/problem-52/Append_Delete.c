#include <stdio.h>
#include <string.h>

int main() {
    int i, k;
    int s_len = 0, t_len = 0;
    char s[100], t[100];
    
    scanf("%s", s);
    s_len = strlen(s);
    
    scanf("%s", t);
    t_len = strlen(t);
    
    scanf("%d", &k);
    
    for(i = 0; s[i] == t[i]; i++);
    
    if(((s_len + t_len) <= k + i * 2 && (s_len + t_len) % 2 == k % 2)|| (s_len + t_len) < k )
    {
        printf("Yes\n"); 
    }else {
        printf("No\n");
    }
    
    return 0;
}
