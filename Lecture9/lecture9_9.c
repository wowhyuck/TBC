#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

/*
	10
	10 / 2 = 5, remainder = 0
	5 / 2 = 2, remainder = 1
	2 / 2 = 1, remainder = 0
	1 / 2 = 0, remainder = 1
*/

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);


int main()
{
	unsigned long num = 10;

	print_binary(num);
	printf("\n");
	print_binary_loop(num);
	printf("\n");

	return 0;
}


void print_binary(unsigned long n)
{
	int remainder = n % 2;

	if (n >= 2)
		print_binary(n / 2);
	printf("%d", remainder);
}

void print_binary_loop(unsigned long n)
{
	long result = 0;
	long remainder;
	int count = 0;

	while (n != 0)
	{
		remainder = n % 2;
		result += (pow(10, count) * remainder);

		n /= 2;
		count++;
	}

	printf("%d\n", result);
}