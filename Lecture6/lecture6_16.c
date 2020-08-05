#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM_DAYS 365

int main()
{
	char my_chars[] = "Hello, World!";

	int daily_temperature[NUM_DAYS];
	double stock_prices_history[NUM_DAYS];

	printf("%zd\n", sizeof(stock_prices_history));
	printf("%zd\n", sizeof(double) * NUM_DAYS);
	printf("%zd\n", sizeof(stock_prices_history[0]));
	printf("\n");

	int my_numbers[5];

	my_numbers[0] = 1;		// subscripts, indices, offsets
	my_numbers[1] = 3;
	my_numbers[2] = 4;
	my_numbers[3] = 2;
	my_numbers[4] = 1024;

	scanf("%d", my_numbers);
	//scanf("%d", &my_numbers[0]);

	printf("%d\n", my_numbers[0]);
	printf("%d\n", my_numbers[1]);
	printf("%d\n", my_numbers[2]);
	printf("%d\n", my_numbers[3]);
	printf("%d\n", my_numbers[4]);

	/* Runtime Error */
	//my_numbers[5] = 123;		// out of bound
	//my_numbers = 7;			// compile error

	return 0;
}






