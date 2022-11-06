#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, reverse = 0;
    const int LINE_MAX = 255;
    char buf[LINE_MAX];

    do {
        printf("Enter a positive number: ");
        scanf("%s", buf);
        n = atoi(buf);
    } while (n <= 0);

    for (int i = 2; i <= n; i++) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }    
        }
        if(isPrime) {
            printf("%d\n",i);
        }
    }
    return 0;
}