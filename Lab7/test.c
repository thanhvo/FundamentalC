#include <stdio.h>
void bubbleSort(int *arr, int size)
{
	int i, limit, temp;
	for (limit = size-2; limit >= 0; limit--)
	{
	for (i=0; i <= limit; i++)
		{
		if (arr[i] > arr[i+1])
		{	
			temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int arr[]={27,17,5,90,12,44,38,84,77};
	int size = sizeof(arr)/sizeof(int);
	bubbleSort(arr,size);
	for (i=(size-1);i>=0;i--)
		printf("%d\t", arr[i]);
	return 0;
}