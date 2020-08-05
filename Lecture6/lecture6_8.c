#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	// Indefinite loop vs. Counting loop
	//while (1)
	//{
	//	// do something
	//}

	/*
		Counting Loop
		1. Counter Initialization
		2. Counter check
		3. Counter change
	*/

	//int i;
	//i = 1;
	//while (i <= 10)
	//{
	//	printf("%d", i);
	//	i++;
	//}

	// 6.8 & 6.9
	/*
		for(initialize; test; update)
			statement
	*/
	for (int i = 0; i <= 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	for (int i = 0; i < 100; i = i + 8)
	{
		printf("%d", i);
	}
	printf("\n");

	for (char c = 'A'; c <= 'Z'; c++)
	{
		printf("%c", c);
	}
	printf("\n");

	for (int i = 0; i * i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	for (int x = 1, y = 5; y <= 20; y = (++x * 3) + 10)
	{
		printf("%d", x);
	}
	printf("\n");

	for (double d = 100.0; d < 300; d = d * 1.1)
	{
		printf("%f", d);
		printf("\n");
	}
	printf("\n");

	int i, n;
	n = 2;
	for (i = 2; n < 10; /*	left blank	*/)
	{
		n = n * i;
		printf("%d\n", n);
	}
	printf("\n");

	//for (;;)						// ->		while (1)
	//{
	//	printf("I love you.");
	//}

	i = 0;
	for (printf("Let's go!\n"); i != 7; scanf("%d", &i))
	{
		;	// null statement
	}

	return 0;
}