#include<stdio.h>

    struct hello{
        int lang;
        char name[10];
    };
    
int main(){

    struct  hello obj = {5, "C"}; // Initializing struct directly
    


    printf("Languages : %d\n", obj.lang);
    printf("Name : %s\n", obj.name);

    return 0;
}