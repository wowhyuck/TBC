#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "stack.h"

#define WIDTH	7
#define HEIGHT	7

static int map[HEIGHT][WIDTH] = {	// 0: empty, 1: full
									0, 0, 0, 0, 0, 0, 0,
									0, 1, 1, 1, 1, 1, 0, 
									0, 1, 0, 0, 0, 1, 0, 
									0, 1, 0, 0, 0, 1, 0,
									0, 1, 0, 0, 0, 1, 0,
									0, 1, 1, 1, 1, 1, 0,
									0, 0, 0, 0, 0, 0, 0
								};

void print_map()
{
	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
			printf("%d ", map[i][j]);
		printf("\n");
	}
	printf("\n");
}

element get_element(const int i, const int j)
{
	element new_element;
	new_element.i = i;
	new_element.j = j;
	return new_element;
}

print_stack(const Stack* stack)
{
	printf("Stack : ");
	if (isEmpty(stack) == true)
		printf("Empty.");
	else
		for (int i = 0; i <= stack->top; i++)
			printf("(%d, %d) ", stack->items[i].i, stack->items[i].j);
	printf("\n");
}


int main()
{
	print_map();

	Stack to_visit;
	Initialize(&to_visit);

	Push(&to_visit, get_element(0, 0));			// start cell
	//Push(&to_visit, get_element(3, 3));		// start cell

	while (isEmpty(&to_visit) != true)
	{
		element cell = Pop(&to_visit);

		if (map[cell.i][cell.j] == 1)		// skip if this cell is visited already
			continue;

		map[cell.i][cell.j] = 1;			// tag full

		// Push up cell if needed
		if (cell.i - 1 >= 0 && map[cell.i - 1][cell.j] == 0)
			Push(&to_visit, get_element(cell.i - 1, cell.j));

		// Push down cell if needed
		if (cell.i + 1 < HEIGHT && map[cell.i + 1][cell.j] == 0)
			Push(&to_visit, get_element(cell.i + 1, cell.j));

		// Push left cell if needed
		if (cell.j - 1 >= 0 && map[cell.i][cell.j- 1] == 0)
			Push(&to_visit, get_element(cell.i, cell.j - 1));

		// Push right cell if needed
		if (cell.j + 1 < WIDTH && map[cell.i][cell.j + 1] == 0)
			Push(&to_visit, get_element(cell.i, cell.j + 1));

	// Debugging
	system("cls");			// system("clear"); in linux
	print_stack(&to_visit);
	printf("cell : (%d %d)\n", cell.i, cell.j);
	print_map();
	int dummy = _getch();
	}
	printf("Result : \n");
	print_map();

	return 0;
}