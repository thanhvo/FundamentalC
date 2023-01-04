#include <stdio.h>

int sequentialSearch(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main()
{
    int arr[] = {3, 5, 10, 6, 7, 9};
    int key = 10;
    printf("The position of the key is %d", sequentialSearch(arr, 6, key));
    return 0;
}