#include <stdio.h>


int main()
{

    int x,y;
    printf("Enter First Number: ");
    scanf("%d",&x);
    printf("Enter Second Number: ");
    scanf("%d",&y);

    if(x<y)
    {
        printf("%d is the largest number.\n",y);
        printf("%d is the smaller number.\n",x);
    }else if (y<x)
    {
        printf("%d is the largest number.\n",x);
          printf("%d is the smaller number.\n",y);

    }else{
        printf("%d & %d Both are same Number \n",x,y);
    }
    
    

    return 0;
}
