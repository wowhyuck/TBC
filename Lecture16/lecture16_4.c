#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Function-like macros

	#define		ADD(X,Y)		((X)+(Y))

	X and Y : macro arguments
*/

#define ADD1(X,Y)		X+Y
#define ADD2(X,Y)		((X) + (Y))
#define	SQUARE(X)		X*X				//((X)*(X))

/* 유용한 문법 */
/*
	stringizing operator #
	- converts macro parameters to string literals
*/
#define	SQUARE(X)		(X)*(X)
#define PRINT_SQR1(x)	printf("The square of %d is %d.\n", x, SQUARE(x))
#define PRINT_SQR2(x)	printf("The square of " #x " is %d.\n", SQUARE(x))

/*
	## operator combines two tokens into a single token
*/

#define XNAME(n)	x ## n
#define PRT_XN(n)	printf("x" #n " = %d\n", x ## n)


int main()
{
	//int sqr = SQUARE(3);

	//int a = 1;

	//printf("%d\n", 2 * ADD1(1, 3));		// 2 * X + Y = 2 * 1 + 3 = 5 // Wrong!
	//printf("%d\n", 2 * ADD2(1, 3));		// 2 * (1 + 3) = 8

	//printf("%d\n", SQUARE(1+2));		// 1+2*1+2 = 1 + 2 + 2 = 5	// Wrong!
	//printf("%d\n", 100 / SQUARE(3+1));	// 100 / 3 + 1 * 3 + 1 = 33 + 3 + 1 = 37	// Wrong!
	//printf("%d\n", SQUARE(++a));		// ++a * ++a = 3 * 3 = 9	// Dangerous
	//printf("\n");

	/* 유용한 문법 */
	PRINT_SQR1(10);
	PRINT_SQR2(10);

	printf("\n");

	int XNAME(1) = 1;		// int x1 = 1;
	int XNAME(2) = 2;		// int x2 = 1;

	PRT_XN(1);				// printf("x1 " = %d\n", x1);
	PRT_XN(2);				// printf("x2 " = %d\n", x2);

	return 0;
}

/*
	Macro or Funtion ?
	- no space in the macro name
	- Use parenthese
	- Use capital letters for macro function names
	- Speed up?
*/

#define MAX(X,Y)	((X) > (Y) ? (X) : (Y))
#define MIN(X,Y)	((X) < (Y) ? (X) : (Y))
#define ABS(X,Y)	((X) < 0 ? -(X) : (X))
