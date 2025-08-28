#include <stdio.h>
#define PI 3.1416
int main(){
    int time = 20;

    if (time < 18) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }



    (time < 18) ? printf("Good day.") : printf("Good evening.");    // variable = (condition) ? expressionTrue : expressionFalse;

    (PI == 3.1416) ? printf("Right") : printf("Wrong");



    

    return 0;
}