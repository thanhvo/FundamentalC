#include <stdio.h>

int search(const int* arr, const int size, const int key) {
    int i;
    for(i = 0; i < size; i++)
    {
        if(arr[i] == key) return i;
    }

    return -1; // in case not found 10 
}

int main()
{
    int arr[] = {3, 6, 1, 9, 10, 2};
    int key = 10;
    printf("The position of the key is %d", search(arr, 6, key));
    return 0;
}
