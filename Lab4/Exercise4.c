#include <stdio.h>

void sort(int[], int);

int main()
{
    int i;
    int arr[] = { 1, 5, 9, 3, -2, 8, -11, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);
    printf("After sorting, the array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void sort(int arr[], int size)
{
    int i, j, tmp;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}