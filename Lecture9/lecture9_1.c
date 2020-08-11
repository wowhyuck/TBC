#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>		// strlen()

#define WIDTH 20
#define NAME "Joohyuck Seo"
#define ADDRESS "Seoul, Korea"

void print_multiple_chars(char c, int n_stars);		// prototype만 있어도 compile은 실행 가능
void printf_centered_str(char str[]);


int main()
{
	print_multiple_chars('*', WIDTH);

	printf_centered_str(NAME);
	printf_centered_str(ADDRESS);
	printf_centered_str("I love you.");

	print_multiple_chars('*', WIDTH);

	return 0;
}


void print_multiple_chars(char c, int n_stars)
{
	for (int i = 0; i < n_stars; i++)
		printf("%c", c);
	if (c != ' ')
		printf("\n");
}

void printf_centered_str(char str[])
{
	int n_blanks = 0;

	n_blanks = (WIDTH - strlen(str)) / 2;
	print_multiple_chars(' ', n_blanks);
	printf("%s\n", str);
}




