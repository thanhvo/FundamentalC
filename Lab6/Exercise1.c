#include <stdio.h>
#include <math.h>

int formulaA(int n)
{
    if (n <= 0) return 0;
    return (2 * n + 1) + formulaA(n - 1); 
}

float formulaB(int n)
{
    if (n <= 0) return 0;
    return n / 2.0 + formulaB(n - 1);
}

int factorial(int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int formulaC(int n)
{
    if (n <= 0) return 0;
    return factorial(n) + formulaC(n - 1);
}

float formulaD(int n)
{
    if (n <= 0) return 0;
    return sqrt(n) + formulaD(n - 1);
}

long long formulaE(int n)
{
    if (n < 0) return 0;
    if (n == 0) return 1;
    return factorial(n) * formulaE(n - 1);
}

int main()
{
    int n = 10;
    printf("Formular A: %d\n", formulaA(n));
    printf("Formular B: %f\n", formulaB(n));
    printf("Formular C: %d\n", formulaC(n));
    printf("Formular D: %f\n", formulaD(n));
    printf("Formular E: %lld\n", formulaE(5));
    return 0;
}