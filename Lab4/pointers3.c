#include <stdio.h>

int main()
{
    int arr[3] = {10, 200, 3000};
    int *ptr;
    int i = 0;

    ptr = arr;

    for (i = 0; i < 3; i++)
    {
        printf("Address of arr[%d] is %p\n", i, ptr);
        printf("Value of arr[%d] is %d\n", i, *ptr);

        ptr++;
    }
    return 0;
}