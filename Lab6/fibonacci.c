#include <stdio.h>

float fibonacci(float);

int main()
{
    int n = 10;
    printf("Fibonacci(%d) = %f", n, fibonacci(n));

    return 0;
}

float fibonacci(float n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}