#include <stdio.h>
#define SIZE 100

int find(const char*, const char*);

int equals(const char*, const char*);

int main()
{
    char s1[SIZE], s2[SIZE];
    printf("Enter the first string: ");
    fgets(s1, SIZE, stdin);
    printf("Enter the second string: ");
    fgets(s2, SIZE, stdin);
    printf("The first position of the second string in the first string is %d\n", find(s1, s2));
    return 0;
}

int equals(const char *s, const char *t) {
    while(*s != '\0')
    {
        if (*s != *t) return 0;
        s++;
        t++;
    }
    return 1;
}

int find(const char *s, const char *t)
{
    int i = 0;
    while(*s != '\0')
    {
        if (equals(s, t)) return i;
        s++;
        i++;
    }
    return -1;
}
