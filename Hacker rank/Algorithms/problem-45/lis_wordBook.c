#include <stdio.h>

int main() {

    int i, n, arr[100], j, k;

    int page, page_no = 1, count = 0;

    scanf("%d%d", &n,&k);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        for(j = 1; j <= arr[i]; j++)
        {
            page = (j - 1) / k + page_no;

            if(page == j)
            count++;
        }

        page++;
        page_no=page;
    }

    printf("%d\n",count);

    return 0;
}

