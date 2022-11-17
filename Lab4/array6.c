#include <stdio.h>

float getAverage(float*, int);

int main()
{
    float average[] = {6, 7, 8, 9, 10};
    float avg = getAverage(average, sizeof(average) / sizeof(average[0]));
    printf("Average = %f", avg);
    return 0;
}

float getAverage(float *arr, int size)
{
    float output = 0;
    int i = 0;
    for(i = 0; i < size; i++)
    {
        output = output + arr[i];
    }
    return (float) output / size;
}