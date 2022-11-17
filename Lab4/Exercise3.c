#include <stdio.h>

int search(int[], int, int);

int main()
{
    int arr[] = { 1, 5, 9, 3, -2, 8, -11, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;
    printf("The index of the value %d is at %d\n", value, search(arr, size, value));
    return 0;
}

int search(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}