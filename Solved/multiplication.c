#include <stdio.h>

int main()
{


    int x,out;
    printf("Enter the Number: ");
    scanf("%d",&x);

    for (int i = 1; i < 11; i++)
    {
        out = i * x;
        printf("%d * %d = %d\n",x,i,out );
    }
    
    getchar();
    getchar();

    return 0;
}
