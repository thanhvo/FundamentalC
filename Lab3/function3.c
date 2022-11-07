#include <stdio.h>

// Global declaration
int isEven(int);

int main()
{
    int number;

    printf("Input number = ");
    scanf("%d", &number);

    printf("%d", isEven(number));

    return 0;
}

// Function definition
int isEven(int n)
{
    if (n % 2 == 0)
     return 1;
    return 0;
}