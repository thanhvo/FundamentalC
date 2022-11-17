#include <stdio.h>
#include <stdlib.h>

float formulaA(int);
int formulaB(int);
int formulaC(int);
int formulaD(int);
float formulaE(int);
int input();

int main()
{
    int n = input();
    printf("Formula A: %f\n", formulaA(n));
    printf("Formula B: %d\n", formulaB(n));
    printf("Formula C: %d\n", formulaC(n));
    printf("Formula D: %d\n", formulaD(n));
    printf("Formula E: %f\n", formulaE(n));
    return 0;
}

int input() 
{
    int n = 0;
    float f = 0.0;
    const int LINE_MAX = 255;
    char buf[LINE_MAX];

    do {
        printf("Enter a positive number: ");
        scanf("%s", buf);
        f = atof(buf);
        n = (int)f;
    } while (n <= 0 || n != f);
    return n;
}


float formulaA(int n)
{
    int i;
    float s;
    for(i = 1; i <= n; i++)
    {
        s += i / 2.0;
    }
    return s; 
}

int formulaB(int n)
{
    int i, s = 0;
    for (i = 1; i <= n; i++)
    {
        s += (2 * i + 1);
    }
    return s;
}

int formulaC(int n)
{
    int i, factorial = 1, s = 0;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
        s += (factorial + 1);
    }
    return s;
}

int formulaD(int n)
{
    int i, factorial = 1, product = 1;
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
        product *= factorial;
    }
    return product;
}

float formulaE(int n)
{
    int i; 
    float product = 1.0;
    for (i = 1; i <= n; i++)
    {
        product *= (2.0 * i / 3.0); 
    }
    return product;
}