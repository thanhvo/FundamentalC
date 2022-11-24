#include <stdio.h>
#define SIZE 100

void printReverse(char*);

int main()
{
    char s[SIZE];
    printf("Enter a string: ");
    fgets(s, SIZE, stdin);
    printReverse(s);
    return 0;
}

void printReverse(char *s)
{
    int i = 0;
    while(*s != '\0')
    {
        s++;
        i++;
    }
    s--;
    printf("The reversed string is ");
    while(i >= 0) {
        printf("%c", *s);
        s--;
        i--;
    }
}