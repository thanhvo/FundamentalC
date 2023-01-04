#include <stdio.h>

void selection_sort(int *arr, int size) {
    int i, start, min_index, temp;

    for(start = 0; start < size - 1; start++) {
        // find the index of minimum element
        min_index = start;
        for(i=start+1;i<size;i++)
        {
            if (arr[i] < arr[min_index]) min_index = i;
        }
        // swap minimum element with element at start index
        temp = arr[start];
        arr[start] = arr[min_index];
        arr[min_index] = temp;
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
    selection_sort(arr, 5);
    printf("After sorting:\n");
    print(arr, 5);
    return 0;
}