#include <stdio.h>
#include <ctype.h>

int main()
{
    printf("Is '8' digit? - %d\n", isdigit('8'));
    printf("Is 'A' digit? - %d\n", isdigit('A'));
    printf("Is 'a' lower-case? - %d\n", islower('a'));

    printf("To lower-case of 'A' - %c\n", tolower('A'));
    printf("To upper-case of 'a' - %c\n", toupper('A'));

    return 0;
}