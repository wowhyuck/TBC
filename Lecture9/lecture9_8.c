#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
	loop vs recursion
	factorial : 3! = 3 * 2 * 1, 0! = 1
	5! = 5 * 4! = 5 * 4 * 3! = 5 * 4 * 3 * 2! = 5 * 4 * 3 * 2 * 1! = 5 * 4 * 3 * 2 * 1 * 0!
*/

long loop_factorial(int n);
long recursive_factorial(int n);


int main()
{
	int num = 5;
	printf("%d\n", loop_factorial(num));

	printf("%d\n", recursive_factorial(num));

	return 0;
}


long loop_factorial(int n)
{
	long result = 1;

	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}

long recursive_factorial(int n)
{
	if (n > 0)
		return n * recursive_factorial(n - 1);		// tail (end) recursion
	else
		return 1;
}