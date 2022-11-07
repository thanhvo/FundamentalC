#include <stdio.h>

int reverse(int n);

int isPalindrome(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
    {
        printf("It is a palindrome.\n");
    } else {
        printf("It isn't a palindrome.\n");
    }
}

int reverse(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int digit = n % 10;
        rev = 10 * rev + digit;
        n = n / 10;
    }
    return rev;
}

int isPalindrome(int n)
{
    if (n < 0) return 0;
    if (n == reverse(n)) return 1;
    else return 0;
}