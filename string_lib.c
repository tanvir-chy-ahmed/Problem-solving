#include <stdio.h>
#include <string.h>

void menu()
{
    printf("\n===== String Function Menu =====\n");
    printf("1. strcat (append)\n");
    printf("2. strchr (first occurrence)\n");
    printf("3. strcmp (compare)\n");
    printf("4. strcpy (copy)\n");
    printf("5. strlen (length)\n");
    printf("6. strncat (append n chars)\n");
    printf("7. strncmp (compare n chars)\n");
    printf("8. strncpy (copy n chars)\n");
    printf("9. strpbrk (first match of set)\n");
    printf("10. strrchr (last occurrence)\n");
    printf("0. Exit\n");
    printf("Choose: ");
}

int main()
{
    int choose;
    menu();
    scanf("%d", &choose);

    switch (choose)
    {

    //! strcat() -> Append/Concatinate
    case 1:
        char a[10] = "Bitcoin";
        printf("strcat\n");
        strcat(a, " Miner");
        printf("%s\n", a);

        break;

    //! strchr() -> Find
    case 2:
        char *x = strchr("Xornex", 'n'); // strchr does not return a character, it returns a pointer (address). for this use pointer
        printf("%s\n", x);               //* OUTPUT = nex
        printf("%c\n", *x);              //* OUTPUT = n
        break;

    //! strcmp() -> Compare
    case 3:
        printf("%d\n", strcmp("like", "share"));
        printf("%d\n", strcmp("share", "like"));
        printf("%d\n", strcmp("share", "share"));
        //* if equal out 1,else 0,-1
        break;

    //! strcpy() -> var change like one var value set another var
    case 4:
        char src[] = "C Language";
        char dest[20];
        strcpy(dest, src);
        printf("Current: %s\n", dest); //* OUTPUT = C Language

        break;

    //! strlen() -> Cehck Length
    case 5:
        //*%lu  →  print an unsigned long int
        printf("%lu\n", strlen("LoveCC")); //* OUTPUT = 6
        break;

    //! strncat() -> Append n Number of char
    case 6:
        char c[20] = "Hello";
        strncat(c, " World", 3); // Appends "Wor"
        printf("%s\n", c);       // HelloWor
        break;

    //! strncmp() -> Compare n Numbers only
    case 7:
        printf("%d\n", strncmp("abcdef", "abcxyz", 3)); // 0 (first 3 same)
        printf("%d\n", strncmp("abc", "abd", 3));       // <0
        break;

    //! strncpy() -> Copy n chars
    case 8:
        char srcc[] = "Programming";
        char destt[20];
        strncpy(destt, srcc, 5);
        dest[5] = '\0';        // ensure null terminator
        printf("%s\n", destt); // Progr

    //! strpbrk() -> First match of any char in set
    case 9:
        char *p = strpbrk("hello", "aeiou");
        printf("%s\n", p); //* OUTPUT -  ello (first vowel is 'e')

    //! strrchr() → Last occurrence of char
    case 10:
        char *q = strrchr("enade", 'n');
        printf("%s\n", q); //* OUTPUT - nade

    case 0:
        return 0;

    default:
        printf("Invalid Choice");
    }

    getchar();
    return 0;
}
