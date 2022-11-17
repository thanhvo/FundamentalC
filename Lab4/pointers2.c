#include <stdio.h>

int main()
{
    int a = 10;
    int *b;

    b = &a;

    printf("Address of a is %p\n", &a);
    printf("Address of b is %p\n", &b);
    printf("Address stored in b is %p\n", b);

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", *b);

    *b = *b + 1;

    printf("Value of a is %d\n", a);
    printf("Value of b is %d\n", *b);

    return 0;

}