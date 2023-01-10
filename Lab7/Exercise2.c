#include <stdio.h>

int bsearch(int arr[], int size, int key)
{
    int start = 0, end = size -1, mid;
    do {
        mid = (start + end) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) start = mid + 1;
        else end = mid - 1;
    } while (start <= end);
    return -1;
}

int main()
{
    int arr[] = {1, 3, 4, 7, 8, 9, 11};
    int key = 9;
    printf("The position of the key is %d", bsearch(arr, 7, key));
    return 0;
}