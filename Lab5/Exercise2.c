#include <stdio.h>
#define SIZE 100

int find(char*, char);

int main()
{
    char s[SIZE];
    printf("Enter a string: ");
    fgets(s, SIZE, stdin);
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("The first position of the character in the string is %d\n", find(s, c));
    return 0;
}

int find(char *s, char c)
{
    int i = 0;
    while(*s != '\0')
    {
        if (*s == c) return i;
        s++;
        i++;
    }
    return -1;
}