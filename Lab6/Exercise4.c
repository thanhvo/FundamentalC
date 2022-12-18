#include <stdio.h>

int makeChange(int n, int denom)
{
    int next_denom = 0;
    switch (denom) 
    {
        case 25:
            next_denom = 10;
            break;
        case 10:
            next_denom = 5;
            break;
        case 5:
            next_denom = 1;
            break;
        case 1:
            return 1;
    }
    int ways = 0, i = 0;
    for (;i * denom <= n; i++)
    {
        ways += makeChange(n - i * denom, next_denom);
    }
    return ways;
}

int main()
{
    int n = 0;
    printf("Please enter the number of cents: ");
    scanf("%d", &n);
    printf("The number of ways to make change is %d\n", makeChange(n, 25));
    return 0;
}