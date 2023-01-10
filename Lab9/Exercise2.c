#include <stdio.h>
#include <string.h>

int main()
{
    FILE *in_file, *out_file;
    int i, N, sum = 0;
    char buff[255];

    in_file = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/input02.txt", "r");
    out_file = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/output02.txt", "w+");

    fscanf(in_file, "%d", &N);
    for (i = 0; i < N; i++)
    {
        fscanf(in_file, "%255s", buff);
        fprintf(out_file, "%lu\n", strlen(buff));
    }
    
    fclose(in_file);
    fclose(out_file);

    return 0;
}