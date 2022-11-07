#include <stdio.h>

int gcd(int, int);

int main()
{
    int a, b;
    do {
        printf("Enter the first number: ");
        scanf("%d", &a);
        printf("Enter the second number: ");
        scanf("%d", &b);
    } while ( a <= 0 || b <= 0);
    printf("The greatest common divisor is %d\n", gcd(a, b));
}

int gcd(int a, int b)
{
    if (a == b) return a;
    while (a != b)
    {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}