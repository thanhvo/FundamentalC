#include <stdio.h>

int main()
{
    int a[10];
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        a[i] = i + 1;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}