#include <stdio.h>
#define SIZE 255
#define MAX 10000

int sequential_search(int arr[], int size, int key)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == key) return i;
    }
    return -1;
}

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
    char file_name[SIZE];
    int arr[MAX], n, i = 0, size, choice, output, key;
    FILE *in_file, *out_file;
    do 
    {
        printf("Enter a file name: ");
        scanf("%s", file_name);
        in_file = fopen(file_name, "r");
    } while (in_file == NULL);
    
    while (fscanf(in_file, "%d", &n) != EOF) 
    {
        arr[i++] = n;
    }
    fclose(in_file);
    size = i;

    printf("Please choose a searching algorithm:\n");
    printf("1. Sequential Search.\n");
    printf("2. Binary Search.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter a number to search: ");
    scanf("%d", &key);
    switch(choice)
    {
        case 1:
            output = sequential_search(arr, size, key);
            break;
        case 2:
            output = bsearch(arr, size, key);
            break;
        default:
            output = sequential_search(arr, size, key);
            break;
    }
    out_file = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/output03.txt", "w+");
    if (output < 0)
        fprintf(out_file, "%s", "not found");
    else
        fprintf(out_file, "%d", output);
    fclose(out_file);
    return 0;
}