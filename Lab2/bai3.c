#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    const int LINE_MAX = 255;
    char buf[LINE_MAX];

    do {
        printf("Enter a positive number: ");
        scanf("%s", buf);
        n = atoi(buf);
    } while (n <= 0);

    printf( "The reversed number: ");
    while( n > 0) {
        int digit = n % 10;
        printf("%d", digit);
        n /= 10; 
    }
    return 0;
}