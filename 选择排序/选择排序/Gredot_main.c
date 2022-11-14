#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void selection_sort(int a[], int len)
{
	int i, j, temp;

	for (i = 0; i < len - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < len; j++)     
		{
			if (a[j] < a[min])   
			{
				min = j;    
			}
		}
		if (min != i)
		{
			temp = a[min];  
			a[min] = a[i];
			a[i] = temp;
		}
	}
}

int main ()
{
	int arr[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d",& arr[i]);
	} 
	selection_sort(arr,10);
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
