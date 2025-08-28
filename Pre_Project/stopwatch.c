#include <stdio.h>

int main()
{
    int milisecond = 0,second = 0 ,minitue,hour;

    

    for (int i=0;milisecond<1000;i++)
    {
        printf("%d\n",milisecond);
        milisecond++;
        if(milisecond == 999)
        {
            for (int i = 0; second <60;i++)
            {
                printf("%d",second);
                second= second+1; 
                milisecond =0;
            }
        }
        
    }


    return 0;
}

