#include <stdio.h>

int ()
{
    int kw;
    printf("Enter kw: ");
    scanf("%d", &kw);
    if (kw <= 100) {
        printf("%d", 5 * kw);
    } else if (kw <= 150) {
        printf("%d", 100 * 5 + (kw - 100) * 7);
    } else if (kw <= 200) {
        printf("%d", 100 * 5 + 50 * 7 + (kw - 150) * 10);
    } else if (kw < 300) {
        printf("%d", 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (kw - 300) * 20);
    }
    return 0;
}