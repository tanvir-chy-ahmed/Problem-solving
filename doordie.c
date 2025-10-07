#include <stdio.h>

// ANSI color codes for decoration
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define BOLD    "\033[1m"

int main()
{
    char tryText[10] = "Try";
    char you[10] = "If you";

    int choose;

    printf("\n\n");
    printf(CYAN "==============================\n" RESET);
    printf(MAGENTA "        💫 Motivation 💫\n" RESET);
    printf(CYAN "==============================\n\n" RESET);

    printf(BOLD "%s:\n\n" RESET, you);
    printf(YELLOW "\t\t\t1. %s\n" RESET, tryText);
    printf(YELLOW "\t\t\t2. Don't Try\n\n" RESET);

    printf(GREEN "Choose an option (1 or 2): " RESET);
    scanf("%d", &choose);

    printf("\n----------------------------------------\n");

    if (choose == 1)
    {
        printf(BLUE "You chose to %s!\n" RESET, tryText);
        printf(GREEN "Result: Win <---> Lose\n" RESET);
        printf(MAGENTA "But remember... those who try never truly lose! 💪\n" RESET);
    }
    else
    {
        printf(RED "You chose not to try.\n" RESET);
        printf(YELLOW "Result: Lose 😔\n" RESET);
        printf(CYAN "Lesson: Trying is the first step to success!\n" RESET);
    }

    printf("----------------------------------------\n\n");
    printf(BOLD "Thanks for playing! 🚀\n" RESET);

    getchar();
    return 0;
}
