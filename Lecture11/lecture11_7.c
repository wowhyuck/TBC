#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Selection Sort Algorithm
	https://www.geeksforgeeks.org/selection-sort/

	Youtube search "Selection Sort", "C550"

	64 25 12 22 11 (min_idx = 0)
	   64          (min_idx = 0)
	   25          (min_idx = 1)
	      25       (min_idx = 1)
	      12       (min_idx = 2)
	         12    (min_idx = 2)
	            12 (min_idx = 2)
	            11 (min_idx = 4)
	11 25 12 22 64 (swap arr[0] and arr[4])

	11 25 12 22 64 (min_idx = 1)
	      25       (min_idx = 1)
	      12       (min_idx = 2)
	         12    (min_idx = 2)
	            12 (min_idx = 2)
	11 12 25 22 64 (swap arr[1] and arr[2])

	11 12 25 22 64 (min_idx = 2)
	...
*/

void swap(int* xp, int* yp);
void printArray(int arr[], int size);
void selectionSort(int arr[], int n);


int main()
{
	int arr[] = { 64, 25, 12, 22, 11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	selectionSort(arr, n);		// ascending order

	printArray(arr, n);

	return 0;
}


void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}

void selectionSort(int arr[], int n)
{
	for (int idx = 0; idx < n - 1; idx++)
	{
		int min_idx = idx;
		for (int i = idx + 1; i < n; i++)
		{
			if (arr[i] < arr[min_idx])
				min_idx = i;
		}

		swap(&arr[idx], &arr[min_idx]);
	}
}

