#include <stdio.h>


int main(){

    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    int y = ~x;
    printf("Opposite Number: %d\n\n\n",y+1);

    

    return 0;
}
