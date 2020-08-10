#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


char get_choice();
char get_first_char();
void count();
int get_integer();

int main()
{
	int user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;

		case 'b':
			printf("\a\n");
			break;

		case 'c':
			count();
			break;

		default:
			printf("Error with %d.\n", user_choice);
			exit(1);
			break;
		}
	} 

	return 0;
}

char get_choice()
{
	int user_input;
	printf("Enter the letter of your choice : \n");
	printf("a. avengers\tb. beep\n");
	printf("c. count\tq. quit\n");

	user_input = get_first_char();
	while ((user_input < 'a' || user_input>'c') && user_input != 'q')
	{
		printf("Please try again.\n");
		user_input = get_first_char();
	}
	return user_input;
}

char get_first_char()
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}

int get_integer()
{
	int input;
	char c;

	while (scanf("%d", &input) != 1)
	{
		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" is not an integer.\n Please try again.\n");
	}

	return input;
}

void count()
{
	int n, i;
	printf("Enter an integer : \n");
	n = get_integer();

	for (i = 1; i <= n; i++)
	{
		printf("%d\n", i);
	}
	while (getchar() != '\n')
		continue;
}

