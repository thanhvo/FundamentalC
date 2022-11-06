#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, sum = 0;
    const int LINE_MAX = 255;
    char buf[LINE_MAX];

    do {
        printf("Enter a positive number: ");
        scanf("%s", buf);
        n = atoi(buf);
    } while (n <= 0);

    while( n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10; 
    }
    printf( "The sum of digits: %d\n", sum);
    return 0;
}
