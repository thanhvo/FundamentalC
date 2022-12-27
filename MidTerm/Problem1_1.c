#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    }
    while(n <= 0);
    double S = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        S += 1.0 / sqrt(i);
    }
    printf("S = %.4lf", S);
    return 0;
}