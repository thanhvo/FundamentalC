#include <stdio.h>

int main()
{
    int input, i = 0;
    do {
        printf("Input = ");
        scanf("%d", &input);
        i++;
    } while(input < 0);

    printf("Input is a positive innteger nnumber!");
    return 0;
}