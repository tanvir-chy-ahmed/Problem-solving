#include <stdio.h>
#include <string.h>

// typedef struct {
//     int age;
//     char name[50];
// } hello;

// typedef hello * PersonPtr;  // Typedef for pointer to Person

// int main() {
//     hello s;
//     PersonPtr ptr = &s;  // Pointer to a Person structure
    
//     ptr->age = 25;  // Access struct fields using pointer
//     strcpy(ptr->name, "Alice");
    
//     printf("Age: %d\nName: %s\n", ptr->age, ptr->name);
    
//     return 0;
// }


typedef struct {
    int lang;
    char fvrt[20];
}hello; //make a short name of struct hello

    // hello s,*ptr;

int main(){
    hello s; // hello = struct hello
    hello *ptr = &s;
    // ptr = &s;

    ptr -> lang =7;
    strcpy(ptr -> fvrt,"C");



    //Access using  (.) Operator
    printf("I know %d Programming Language\n",(*ptr).lang);
    printf("My Favourite Programming language is %s \n",(*ptr).fvrt);
    //Access using  (->) Operator
    printf("I know %d Programming Language\n",ptr -> lang);
    printf("My Favourite Programming language is %s\n",ptr -> fvrt);
    


    return 0;
}