#include <stdio.h>

int main()
{
    char arr[1000];
    int i,  count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 =0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 =0;

    scanf("%[^\n]%*c", arr);

    for(i=0; arr[i]!='\0';i++){
        if(arr[i] >= '0' && arr[i] <= '9' ){

         if(arr[i] == '0'){
            count0++;
        } else if(arr[i] == '1'){
            count1++;
        }else if(arr[i] == '2'){
            count2++;
        }else if(arr[i] == '3'){
            count3++;
        }else if(arr[i] == '4'){
            count4++;
        }else if(arr[i] == '5'){
            count5++;
        }else if(arr[i] == '6'){
            count6++;
        }else if(arr[i] == '7'){
            count7++;
        }else if(arr[i] == '8'){
            count8++;
        }else if(arr[i] == '9'){
            count9++;
        }
      }
    }

    printf("%d %d %d %d %d %d %d %d %d %d\n", count0, count1, count2 , count3, count4, count5, count6 , count7, count8 , count9 );

    return 0;
}
