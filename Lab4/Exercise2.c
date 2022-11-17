#include <stdio.h>

int max(int[], int);
int min(int[], int);

int main()
{
    int arr[] = { 1, 5, 9, 3, -2, 8, -11, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Min value: %d\n", min(arr, size));
    printf("Max value: %d\n", max(arr, size));
    return 0;
}

int min(int arr[], int size)
{
    int minValue = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] < minValue)
        {
            minValue = arr[i];
        }
    }
    return minValue;
}

int max(int arr[], int size)
{
    int maxValue = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if (arr[i] > maxValue)
        {
            maxValue = arr[i];
        }
    }
    return maxValue;
}