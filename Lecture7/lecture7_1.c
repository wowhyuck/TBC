#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	/*
		if (expression)
			Statement1
		else
			Statement2
	*/

	int number;

	printf("Input a positive integer : ");
	scanf("%d", &number);

	if (number % 2 == 0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}

	return 0;
}