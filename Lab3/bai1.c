#include <stdio.h>
#include <stdlib.h>

int getInput() 
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

int sum(int n) 
{
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main()
{
    int n = getInput();
    printf("Sum = %d\n", sum(n));
}