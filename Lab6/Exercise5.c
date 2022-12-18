#include <stdio.h>

void print(int arr[], int n)
{
    int i = 0;
    for (; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

void allSubsets(int set[], int n, int pos, int len, int subset[])
{
    if (pos == n)
    {
        print(subset, len);
        return;
    }
    subset[len] = set[pos];
    allSubsets(set, n, pos + 1, len + 1, subset);
    allSubsets(set, n, pos + 1, len, subset);
}

int main()
{
    int n = 0, i;
    printf("Please enter the number of elements: ");
    scanf("%d", &n);
    int set[n], subset[n];
    for (i = 0; i < n; i++)
    {
        printf("Please enter element %d: ", i + 1);
        scanf("%d", set + i);
    }
    allSubsets(set, n, 0, 0, subset);
    return 0;
}