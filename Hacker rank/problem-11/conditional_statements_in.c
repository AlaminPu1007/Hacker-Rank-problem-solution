
#include <stdio.h>
 int main()
 {
     int  start, end, N;

     //get input from user
     scanf("%d %d",&start,&end);
     for(N =start; N< end ;N++){

        if(N > 9){

        if(N % 2 == 0){

            printf("even");
        }
        else  {printf("odd")};

     }else {
         if(N==1){
            printf("one\n");
         } else if(N==2){
            printf("two\n");
         }else if(N==3){
            printf("three\n");
         }else if(N==0){
            printf("two\n");
         }else if(N==4){
            printf("four\n");
         }else if(N==5){
            printf("five\n");
         }else if(N==0){
            printf("two\n");
         }else if(N==6){
            printf("six\n");
         }else if(N==7){
            printf("seven\n");
         }else if(N==8){
            printf("eight\n");
         }else if(N==9){
            printf("nine\n");
         }
     }

     }


     return 0;
 }



