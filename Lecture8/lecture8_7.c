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
	// .14는 아직 buffer에 있으므로 getchar()할 때 buffer에 있는 .14를 가져온다.

	char c;

	while ((c = getchar()) != '\n')
		putchar(c);
	printf("\n");

	return 0;
}