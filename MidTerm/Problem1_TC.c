#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    printf("Nhap vao mot so: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Nhap lai n");
        return 0;
    }
    double S = 0;
    for (i = 1; i <= n; i ++)
    {
        S += 3.0 * i * i / sqrt(2 * i + 1);
    }
    printf("S = %.3lf", S);
    return 0;
}