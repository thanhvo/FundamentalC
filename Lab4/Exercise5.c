#include <stdio.h>
#include <stdlib.h>

void add(int m, int n, int A[m][n], int B[m][n], int C[m][n])
{
    int row, col;
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
}

void substract(int m, int n, int A[m][n], int B[m][n], int C[m][n])
{
    int row, col;
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            C[row][col] = A[row][col] - B[row][col];
        }
    }
}

void multiply(int m, int n, int k, int A[m][n], int B[n][k], int C[m][k])
{
    int i, j, l;
    for (i = 0; i < m; i++)
    {
        for (l = 0; l < k; l++)
        {
            C[i][l] = 0;
            for (j = 0; j < n; j++)
            {
                C[i][l] += A[i][j] * B[j][l];
            }
        }
    }
}

void print(int m, int n, int A[m][n])
{
    int row, col;
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%d\t", A[row][col]);
        }
        printf("\n");
    }
}

int main()
{
    int A[][3] = {
        {1, 2, 3},
        {2, 4, 6},
        {3, 6, 9}
    };
    int B[][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(A[0]) / sizeof(A[0][0]);
    int p = sizeof(B[0]) / sizeof(B[0][0]);
    int C[m][n], D[m][n], E[m][p]; 
    add(m, n, A, B, C);
    substract(m, n, A, B, D);
    multiply(m, n, p, A, B, E);
    printf("Addition of two matrixes is:\n");
    print(m, n, C);
    printf("Substraction of two matrixes is:\n");
    print(m, n, D);
    printf("Multiplication of two matrixes is:\n");
    print(m, p, E);
    return 0;
}
