#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	/*
		Assume that your input is :
		Hello 123 3.14
	*/

	char str[255];
	int i, i2;
	double d;

	scanf("%s %d %lf", str, &i, &d);
	printf("%s %d %lf", str, i, d);

	// or (see the difference)

	scanf("%s %d %d", str, &i, &i2);
	printf("%s %d %d", str, i, i2);

	// or (see the difference)
	// .14�� ���� buffer�� �����Ƿ� getchar()�� �� buffer�� �ִ� .14�� �����´�.

	char c;

	while ((c = getchar()) != '\n')
		putchar(c);
	printf("\n");

	return 0;
}