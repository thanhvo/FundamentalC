#include <stdio.h>

int main()
{
    FILE *fp;

    fp = fopen("/Users/thanhvo/Teaching/Fundamental_C/Lab9/output.txt", "w+");
    fputs("Faculty of Information Technology\n", fp);
    fputs("Ton Duc Thang University", fp);

    return 0;
}