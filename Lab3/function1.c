#include <stdio.h>

int main()
{
    int i;
    // First time
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i * i);
    }

    // Second time
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", i * i);
    }

    return 0;
}