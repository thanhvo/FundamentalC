#include <stdio.h>

int main()
{
    int arr[] = {1, 20, 300, 40000};
    int i = 0;

    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}