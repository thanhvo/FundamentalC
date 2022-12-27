#include <stdio.h>

int main()
{
    int type, amount;
    const int COSTS[] = {500000, 50000, 100000, 200000, 300000};
    printf("Nhap loai the: ");
    scanf("%d", &type);
    printf("Nhap so tien: ");
    scanf("%d", &amount);
    if (type <= 0 || type > 5)
    {
        printf("Nhap sai loai the");
    }
    else if (amount % 50000 != 0)
    {
        printf("Nhap sai so tien");
    } 
    else if (amount < COSTS[type - 1]) 
    {
        printf("Khong du tien");
    }
    else {
        printf("Tien thoi %d", amount - COSTS[type -1]);
    }
    return 0;
}