#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int* ptr = 0;			// try double*, long long*, char*, void*

	//printf("%d", *ptr);	// Error in this lecture

	//printf("%p %lld\n", ptr, (long long)ptr);

	//ptr++;					// try -=, ++, --, -, +	

	//printf("%p %lld\n", ptr, (long long)ptr);

	//ptr=-ptr				// Not working
	//ptr=+ptr				// Not working

	/* Subtraction */
	double arr[10];
	double* ptr1 = &arr[3], * ptr2 = &arr[5];

	//ptr2 = ptr1 + ptr2;	// Not working: �ּҰ����� ���� �����ص� �ǹ̰� ����.
	int i = ptr2 - ptr1;	// meaning? ���� ������ ���� �� index�� ���̸� �� �� �ִ�.

	printf("%p %p %d\n", ptr1, ptr2, i);

	return 0;
}