#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>			// getchar(), putchar()
#include <ctype.h>			// isalpha() and more

/*
	Reference link
	https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
*/

int main()
{
	/*
		1. Introduce getchar(), putchar()
		2. Use while loop to process character sequences
		3. Filter a specific character
		4. Convert numbers to asterisks
		5. Lower characters to Upper characters
	*/

	char ch;
		
	while ((ch = getchar()) != '\n')		// Use '\n' to find the end of a sentence
	{
		if (ch == 'f' || ch == 'F')			// Filter a specific character
		{
			ch = 'X';
		}

		//if (ch >= '0' && ch <= '9')		// Convert numbers to asterisks
		//{
		//	ch = '*';
		//}

		//if (ch >= 'a' && ch <= 'z')		// Lower characters to Upper characters
		//{
		//	ch -= 'a' - 'A';				// 'A' = 65, 'a' = 97
		//}
		//else if (ch >= 'A' && ch <= 'Z')	// Upper characters to Lower characters
		//{
		//	ch += 'a' - 'A';
		//}

		// 7.3 ctype.h 문자 함수들 예제
		if (isdigit(ch))					// Convert numbers to asterisks
		{
			ch = '*';
		}

		if (islower(ch))					// Lower characters to Upper characters
		{
			ch = toupper(ch);
		}
		else if (isupper(ch))				// Upper characters to Lower characters
		{
			ch = tolower(ch);
		}

		putchar(ch);
	}

	putchar(ch);

	return 0;
}