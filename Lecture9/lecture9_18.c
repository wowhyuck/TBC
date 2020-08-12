#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int* a, int* b)
{
	printf("%p %p\n", a, b);
	int temp = *b;
	*b = *a;
	*a = temp;
}


int main()
{
	int a = 123;
	int b = 456;
	printf("%p %p\n", &a, &b);

	swap(&a, &b);
	printf("%d %d\n", a, b);

	return 0;
}