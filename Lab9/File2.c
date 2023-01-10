#include <stdio.h>

int main()
{
    FILE *fp;
    char buff[255];

    fp = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/input.txt", "r");

    fgets(buff, 255, (FILE*)fp);
    printf("%s", buff);

    fgets(buff, 255, (FILE*)fp);
    printf("%s", buff);

    fclose(fp);

    return 0;
}