#include <stdio.h>
#include <ctype.h>
#define SIZE 100

char* normalize(char*);

int main()
{
    char s[SIZE];
    printf("Enter a string: ");
    fgets(s, SIZE, stdin);
    printf("The normalized string is %s \n", normalize(s));
    return 0;
}

char *ltrim(char *s)
{
    while(isspace(*s)) s++;
    return s;
}

char *rtrim(char *s)
{
    char* back = s + strlen(s);
    while(isspace(*--back));
    *(back+1) = '\0';
    return s;
}

char *trim(char *s)
{
    return rtrim(ltrim(s)); 
}

char* normalize(char *s)
{
    char *first = s, *t = s, space = 1;
    s = trim(s);
    while(*s != '\0')
    {
        while(isspace(*s)) {
            s++;
            if (!space) {
                *t = ' ';
                t++;
            }
            space = 1;
        }
        if (space) {
            *t = toupper(*s);
        } else {
            *t = tolower(*s);
        }
        space = 0;
        s++;
        t++; 
    }
    *t = '\0';
    return first;
}