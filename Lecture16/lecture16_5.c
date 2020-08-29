#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

/*
	Variadic Macros accept & variable number of arguments.
*/

#define PRINT(X, ...) printf("Message " #X ": " __VA_ARGS__)
// ... : ellipses
// __VA_ARGS : one of the predefined macros

/*
printf(...)
stdvar.h Variadic arguments
*/


int main()
{
	double x = 48;
	double y;

	y = sqrt(x);
	PRINT(1, "x = %g\n", x); // printf("Message " #X ": " __VA_ARGS__)
	PRINT(2, "x = %.2f, y = %.4f\n", x, y);

	return 0;
}