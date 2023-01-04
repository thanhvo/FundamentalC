#include <stdio.h>
void print(int);
void function(int, int);
int arr1[100] = {0}, arr2[100];
int main()
{
    int n,i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    
    for(i=0; i<n; i++)
		scanf("%d", &arr2[i]);
    function(n, 0);
}

void print(int n)
{
    int i;
    for(i=0; i < n; i++) 
		if(arr1[i]==1) 
			printf("%d ", arr2[i]);
    printf("\n");
}

void function(int n, int d)
{
    int i;
    for(i=0; i<2; i++)
    {
        arr1[d]=i;
        if(d==n-1) 
			print(n);
        else 
			function(n,d+1);
    }
}

