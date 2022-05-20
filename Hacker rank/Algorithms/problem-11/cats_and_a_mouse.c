
#include <stdio.h>
int main()
{
    int catA, catB, mouse, duration1 = 0, duration2 = 0;
    int n, i;

    //get input from user
    scanf("%d",&n);
    while(n > 0){

        duration1 = 0;
        duration2 = 0;

        scanf("%d%d%d",&catA, &catB, &mouse);
        //duration from catA to mouse
        duration1 = catA - mouse;
        //duration from catA to mouse
        duration2 = catB - mouse;

        if(duration1 < 0){
            duration1 = duration1 * (-1);
        }
        if(duration2 < 0){
            duration2 = duration2 * (-1);
        }

        if(duration1 < duration2){
            printf("Cat A\n");
        }else if(duration1 > duration2) {
            printf("Cat B\n");
        }else{
            printf("Mouse C\n");
        }
        n--;

    }

    return 0;
}
