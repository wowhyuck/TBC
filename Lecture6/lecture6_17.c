#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 5

int main()
{
	/* Motivation */
	int i1 = 0;
	int i2 = 1;
	int i3 = 2;
	// ...

	printf("%d\n", i1);
	printf("%d\n", i2);
	printf("%d\n", i3);
	// ...
	printf("\n");

	int my_arr[SIZE];

	// prepare for array data
	for (int i = 0; i < SIZE; i++)
	{
		my_arr[i] = i;
	}

	// print array data
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", my_arr[i]);
	}
	printf("\n");

	// Exercise
	int num[SIZE];
	int sum = 0;

	printf("Enter %d numbers : ", SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		scanf("%d", &num[i]);			// &(num[i])
	}
	// for문을 나누는 이유: 최근 병렬기법으로 인해 다른 기능별로 for문을 나누는 추세
	for (int i = 0; i < SIZE; i++)		
	{
		sum += num[i];
	}
	printf("Sum = %d\n", sum);

	return 0;
}


