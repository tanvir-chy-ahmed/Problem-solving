#include <stdio.h>
#include <string.h>


int main(){

    //! strcmp() -> Compare
    printf("%d\n",strcmp("like","share"));
    printf("%d\n",strcmp("share","like"));
    printf("%d\n",strcmp("share","share")); 
    //* if equal out 1,else 0,-1

    //! strncmp() -> Compare n Numbers only 
    printf("%d\n", strncmp("abcdef","abcxyz",3)); // 0 (first 3 same)
    printf("%d\n", strncmp("abc","abd",3));       // <0



    
    //!strchr() -> Find 
    char *x = strchr("Xornex",'n'); //strchr does not return a character, it returns a pointer (address). for this use pointer
    printf("%s\n",x);//* OUTPUT = nex
    printf("%c\n",*x); //* OUTPUT = n
    //* Output - nex

    



    //! strcat() -> Append
    char a[10] = "Tanvir";
    printf("Old: %s\n\n",a);
    strcat(a," ahmed");
    printf("New: %s\n",a); //* OUTPUT = Tanvir ahmed


    //! strncat() -> Append n Number of char
    char c[20] = "Hello";
    strncat(c, " World", 3);  // Appends "Wor"
    printf("%s\n", c);       // HelloWor


    //! strcpy() -> var change like one var value set another var
    char src[] = "C Language";
    char dest[20];
    
    strcpy(dest,src);
    printf("Current: %s\n",dest); //* OUTPUT = C Language


    //! strncpy() -> Copy n chars
    char srcc[] = "Programming";
    char destt[20];
    strncpy(destt, srcc, 5);
    dest[5] = '\0'; // ensure null terminator
    printf("%s\n", destt);   // Progr



    //*%lu  →  print an unsigned long int
    //! strlen() -> Cehck Length 
    printf("%lu\n",strlen("LoveCC")); //* OUTPUT = 6




    //! strpbrk() -> First match of any char in set
    char *p = strpbrk("hello", "aeiou");
    printf("%s\n", p);  //* OUTPUT -  ello (first vowel is 'e')


    //! strrchr() → Last occurrence of char
     char *q = strrchr("enade", 'n');
    printf("%s\n", q);  //* OUTPUT - nade



    return 0;
}
