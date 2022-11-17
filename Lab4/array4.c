#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do {
        printf("Array size = ");
        scanf("%d", &n);
    } while (n < 0);

    int *arr;
    arr = calloc(n, sizeof(int));

    int i = 0;

    for (i =0; i < n; i++)
    {
        *(arr + i) = i;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(arr + i));
    }

    free(arr);
    return 0;
}