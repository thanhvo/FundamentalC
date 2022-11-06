#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n = 0, sum = 0;
    const int LINE_MAX = 255;
    char buf[LINE_MAX];
    char binary[LINE_MAX];

    do {
        printf("Enter a positive number: ");
        scanf("%s", buf);
        n = atoi(buf);
    } while (n <= 0);

    while( n > 0) {
        int digit = n % 2;
        binary[i++] = digit + '0';
        n /= 2; 
    }
    printf( "Binary representation:\n");
    for (int j = i -1; j>= 0; j--) {
        printf("%c",binary[j]);
    }
    return 0;
}
