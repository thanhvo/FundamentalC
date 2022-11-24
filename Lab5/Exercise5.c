#include <stdio.h>
#include <string.h>
#define SIZE 100

char* insert(char*, const char*, int);

int main()
{
    char s1[SIZE], s2[SIZE];
    int pos;
    printf("Enter the first string: ");
    fgets(s1, SIZE, stdin);
    printf("Enter the second string: ");
    fgets(s2, SIZE, stdin);
    printf("Enter the position to insert: ");
    scanf("%d", &pos);
    printf("The string after inserting the second string is %s\n", insert(s1, s2, pos));
    return 0;
}

char* insert(char *s1, const char *s2, int pos)
{
    int i = 0;
    int n = strlen(s2);
    char *first = s1;
    s1 = s1 + pos;
    int m = strlen(s1);
    for(i = m; i >= 0; i--)
    {
        *(s1 + n - 1 + i) = *(s1 + i);
    }
    for (int i = 0; i < n - 1 ; i++)
    {
        *(s1 + i) = *(s2 + i);
    }
    return first;
}