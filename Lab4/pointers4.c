#include <stdio.h>

int main()
{
    int val = 10;
    int *ptr1;
    int **ptr2;

    ptr1 = &val;
    ptr2 = &ptr1;

    printf("Address of val is %p\n", &val);
    printf("Address stored in ptr1 is %p\n", ptr1);
    printf("Address of ptr1 is %p\n", &ptr1);
    printf("Address stored in ptr2 is %p\n", ptr2);

    printf("Value of val through ptr1 is %d\n", *ptr1);
    printf("Value of val through ptr2 is %d\n", **ptr2);

    return 0;
}