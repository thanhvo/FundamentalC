#include <stdio.h>

int isPerfect(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPerfect(n)) {
        printf("It is a perfect number\n");
    } else {
        printf("It isn't a perfect number\n");
    }
}

int isPerfect(int n)
{
    int sum = 0;
    if (n <= 1) return 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0) sum+= i;
    }
    if (sum == n) return 1;
    else return 0;
}