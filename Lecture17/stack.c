#include "stack.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void Initialize(Stack* stack) 
{
	stack->top = -1;
	// allocate memory if dynamic array is used
}

bool isFull(const Stack* stack)
{
	if (stack->top >= MAX_STACK_SIZE - 1)
		return true;
	else
		return false;
}

bool isEmpty(const Stack* stack)
{
	if (stack->top == - 1)
		return true;
	else
		return false;
}
void Push(Stack* stack, element item)
{
	if (isFull(stack) == true)
		printf("Stack is full. Cannot add.\n");
	else
	{
		//memcpy(&stack->items[++stack->top], &item, sizeof(item));
		stack->items[++stack->top] = item;
	}
}

element Pop(Stack* stack)
{
	if (isEmpty(stack) == true)
	{
		printf("Stack is empty. Cannot remove.\n");
		element temp = { -1 };		// place holder, dummy
		return temp;
	}
	return stack->items[stack->top--];
}

