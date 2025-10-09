#include <stdio.h>


int main()
{   
    
    int n,x;
    printf("Enter 1-n number: ");
    scanf("%d",&n);

    for (size_t i = 1; i < n; i++)
    {
        printf("%u\n",i);
    }
     printf("%d\n",n);
    return 0;
}
