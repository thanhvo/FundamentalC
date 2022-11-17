#include <stdio.h>
#include <stdlib.h>

int** add(int**, int**, int, int);
int** substract(int**, int**, int, int);
int** multiply(int**, int**, int, int, int);
void print(int**, int, int);

int main()
{
    int valuesA[][3] = {
        {1, 2, 3},
        {2, 4, 6},
        {3, 6, 9}
    };
    int valuesB[][3] = {
        {1, 1, 1},
        {2, 2, 2},
        {3, 3, 3}
    };
    int m = sizeof(valuesA) / sizeof(valuesA[0]);
    int n = sizeof(valuesA[0]) / sizeof(valuesA[0][0]);
    int p = sizeof(valuesB[0]) / sizeof(valuesB[0][0]);
    int *ARows[m] = {valuesA[0], valuesA[1], valuesA[2]};
    int **A = ARows;
    int *BRows[m] = {valuesB[0], valuesB[1], valuesB[2]};
    int **B = BRows;  
    int **C = add(A, B, m, n);
    int **D = substract(A, B, m, n);
    int **E = multiply(A, B, m, n, p);
    printf("Addition of two matrixes is:\n");
    print(C, m, n);
    printf("Substraction of two matrixes is:\n");
    print(D, m, n);
    printf("Multiplication of two matrixes is:\n");
    print(E, m, p);
    return 0;
}

int** add(int **A, int **B, int m, int n)
{
    int i, row, col;
    int* C[m];
    for (i = 0; i < m; i++)
        C[i] = (int*)malloc(n * sizeof(int));
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            C[row][col] = A[row][col] + B[row][col];
        }
    }
    return C;
}

int** substract(int **A, int **B, int m, int n)
{
    int i, row, col;
    int* C[m];
    for (i = 0; i < m; i++)
        C[i] = (int*)malloc(n * sizeof(int));
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            C[row][col] = A[row][col] - B[row][col];
        }
    }
    return C;
}

int** multiply(int **A, int **B, int m, int n, int k)
{
    int i, j, l;
    int* C[m];
    for (i = 0; i < m; i++)
        C[i] = (int*)malloc(n * sizeof(int));
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
    return C;
}

void print(int **A, int m, int n)
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

