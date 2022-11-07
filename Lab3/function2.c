#include <stdio.h>

void printSquares();

int main()
{
    printSquares();
    printSquares();
    return 0;
}

void printSquares()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i * i);
    }
}