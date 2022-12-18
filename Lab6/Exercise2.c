#include <stdio.h>

int numOfWays(int n)
{
    if (n <= 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;
    return numOfWays(n - 3) + numOfWays(n - 2) + numOfWays(n - 1);
}

int main()
{
    int n = 0;
    printf("Please enter a number of steps:");
    scanf("%d", &n);
    printf("The number of ways is %d\n", numOfWays(n));
    return 0;
}