// The solution is provided at 
// https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
#include <stdio.h>
#include <string.h>

void swap(char* x, char* y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char* s, int l, int r)
{
    int i = 0;
    if (l == r)
        printf("%s\n", s);
    else 
    {
        for (i = l; i <= r; i++) {
            swap((s + l), (s + i));
            permute(s, l + 1, r);
            swap((s + l), (s + i));
        }
    }
}

int main()
{
    char s[100];
    printf("Please enter a string:");
    scanf("%s", s);
    int n = strlen(s);
    permute(s, 0, n - 1);
    return 0;
}