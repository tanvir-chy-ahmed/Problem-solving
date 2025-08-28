#include <stdio.h>
#include <string.h>

struct hello{
    int lang;
    char fvrt[20];
};

    struct hello s,*ptr;  //another method to define struct pointer


int main(){
    // ptr = &s;

    struct hello s;
    struct hello *ptr = &s;
    
    // In the above code s is an instance of struct point and ptr is
    // the struct pointer because it is storing the address of struct point. 


    s.lang = 7;
    strcpy(s.fvrt,"C & C++ & C#");

    //Access using  (.) Operator
    printf("I know %d Programming Language\n",(*ptr).lang);
    printf("My Favourite Programming language is %s \n",(*ptr).fvrt);
    //Access using  (->) Operator
    printf("I know %d Programming Language\n",ptr -> lang);
    printf("My Favourite Programming language is %s\n",ptr -> fvrt);
    
    
    

    return 0;
}