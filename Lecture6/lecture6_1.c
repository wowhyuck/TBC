#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int num;
	int sum = 0;
	int status;

	printf("Enter an integer (q to quit) : ");

	while (scanf("%d", &num) == 1)				// equality operator
	{
		sum += num;
		printf("Enter next integer (q to quit) : ");
	}
	printf("Sum = %d\n", sum);

	return 0;
}

