#include <stdio.h>

int swap(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nThe number after swapping: %d\n", swap(n));
}

int swap(int n)
{
    int first, last = -1, sig = 1, m = n;
    if (n == 0) return n;
    while (n > 0)
    {
        first = n % 10;
        if (last < 0)
        {
            last = first;
        }
        sig = sig * 10;
        n = n / 10;
    }
    if (first == last) return m;
    sig = sig / 10;
    return (m - last + first - first * sig + last * sig);   
}
