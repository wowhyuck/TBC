#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>


int main()
{
	unsigned int num;
	bool isPrime;		// flag, try bool type

	scanf("%d", &num);

	/*
		TODO: Check if num is a prime number
		ex) num is 4, try num % 2, num % 3
		ex) num is 5, try num % 2, num % 3, num % 4
	*/

	isPrime = true;

	for (unsigned div = 2; (div * div) <= num; div++)
	{
		if (num % div == 0)
		{
			isPrime = false;
			if (num == (div * div))
				printf("%d is divisible by %u.\n", num, div);
			else
				printf("%d is divisible by %u and %u.\n", num, div, num / div);
		}
	}

	if (isPrime)
	{
		printf("%u is a prime number.\n", num);
	}
	else
	{
		printf("%u is not a prime number.\n", num);
	}

	return 0;
}