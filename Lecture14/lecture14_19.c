#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>		// strcmp (HINT!)
#include <string.h>			// C99

enum spectrum {red, orange, yellow, green, blue};
const char* colors[] = { "red", "orange", "yellow", "green", "blue" };

#define LEN 30


int main()
{
	char choice[LEN] = { 0, };
	enum spectrum color;
	bool color_is_found = false;

	while (1)
	{
		printf("Input a color name (empty line to quit):\n");
		
		if (scanf("%[^\n]%*c", choice) != 1)
			break;

		for (int i = 0; i < 5; i++)
		{
			if (!strcmp(choice, colors[i]))
			{
				color_is_found = true;
				color = i;
				break;
			}
		}
		if (color_is_found)
		{
			switch (color)
			{
			case red:
				printf("Red Apple\n");
				break;

			case orange:
				printf("Orange Orange\n");
				break;

			case yellow:
				printf("Yellow Banana\n");
				break;

			case green:
				printf("Green Grass\n");
				break;

			case blue:
				printf("Blue Ocean\n");
				break;
			}
		}
		else
			printf("Please try different color road.\n");
		color_is_found = false;
	}
	printf("Goodbye!");

	return 0;
}