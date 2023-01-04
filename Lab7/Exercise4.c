#include <stdio.h>

void bubble_sort(int *arr, int size) {
    int i, limit, temp;

    for (limit = size - 2; limit >= 0; limit--)
    {
        for (i = 0; i <= limit; i++)
        {
            if (arr[i] < arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}

void print(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
} 

int main()
{
    int arr[] = { 3, 6, 2, 9, 7};
    printf("Before sorting:\n");
    print(arr, 5);
    bubble_sort(arr, 5);
    printf("After sorting:\n");
    print(arr, 5);
    return 0;
}