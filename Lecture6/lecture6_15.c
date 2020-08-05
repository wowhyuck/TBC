#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define NUM_ROWS	10
#define FIRST_CHAR	'A'
#define LAST_CHAR	'J'


int main()
{
	int r;		// row loop
	int c;		// character loop

	// First example
	//for (r = 0; r < NUM_ROWS; r++)			// outer row loop
	//{
	//	for (char c = FIRST_CHAR; c <= LAST_CHAR; c++)		// inner character loop
	//	{
	//		printf("%c ", c);
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	// Second example
	//for (r = 0; r < NUM_ROWS; r++)
	//{
	//	for (char c = FIRST_CHAR; c <= FIRST_CHAR + r; c++)
	//	{
	//		printf("%c ", c);
	//	}
	//	printf("\n");
	//}

	// Third example
	for (r = 0; r < NUM_ROWS; r++)
	{
		for (char c = FIRST_CHAR + r; c <= LAST_CHAR; c++)
		{
			printf("%c ", c);
		}
		printf("\n");
	}

	return 0;
}


