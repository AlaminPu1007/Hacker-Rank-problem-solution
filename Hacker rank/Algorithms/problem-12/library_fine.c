
#include <stdio.h>
int main()
{
    int d1,d2,m1,m2,y1,y2;
    int Value = 0;
    ///get return date of user
    scanf("%d%d%d",&d1,&m1,&y1);

    ///actual date to return
    scanf("%d%d%d",&d2,&m2,&y2);

    if((d1 == d2) && (m1 == m2) && (y1 == y2)){
        /// get our actual output
        printf("0");
        return 0;
    }

    ///if due type is year
     if((y1 != y2)){

        if(y1 > y2){
            Value = (y1 - y2) * 10000;
        }else {
            Value = 0;
        }
        /// get our actual output
        printf("%d\n",Value);
        return 0;
    }

    ///if due type is month
     if((m1 != m2)){
        if(m1 > m2){
            Value = (m1 - m2) * 500;
        }else {
            Value = 0;
        }
        /// get our actual output
        printf("%d\n",Value);
        return 0;
    }

    ///if due type is day
    if( (d1 != d2) ){
        if(d1 > d2){
            Value = (d1 - d2) * 15;
        }else {
            Value = 0;
        }

        /// get our actual output
        printf("%d\n",Value);

        return 0;
    }





    return 0;
}
