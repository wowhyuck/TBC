#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int a, b;

	a = 123;

	int* a_ptr;		// * : asterisk
	a_ptr = &a;		// & : address-of operator
	printf("%d %d %p\n", a, *a_ptr, a_ptr);		// %p: �ּ��� ����������.

	*a_ptr = 456;	// * : re-direction or de-referencing
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	b = *a_ptr;
	printf("%d\n", b);

	*a_ptr = 789;
	printf("%d\n", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	b = 12;
	printf("%d\n", b);
	printf("%d %d %p\n", a, *a_ptr, a_ptr);

	a = 1004;
	printf("%d %d %p %d\n", a, *a_ptr, a_ptr, b);


	/* 9.14: �����Ϳ� �ڵ� ��Ÿ�� */

	// Tools -> Options -> Text Editor -> C/C++ -> Formatting -> General -> Default formatting style

	// int *a_ptr vs int* a_ptr
	// int *my_ptr, sec_ptr;
	int* x, y;		// == int *x, int y

	int* c;			// C++�� �ɰ��� ���
	int* d;

	return 0;
}