#include <stdio.h>

int main()
{
    FILE *in_file, *out_file;
    int i, n, N, sum = 0;

    in_file = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/input01.txt", "r");
    out_file = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/output01.txt", "w+");

    fscanf(in_file, "%d", &N);
    for (i = 0; i < N; i++)
    {
        fscanf(in_file, "%d", &n);
        sum += n;
    }
    fprintf(out_file, "%d", sum);

    fclose(in_file);
    fclose(out_file);

    return 0;
}