#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int int_min(int i, int j);


int main()
{
	/* 9.3 함수의 자료형과 반환값 */
	//int i1, i2;

	//while (1)
	//{
	//	printf("Input two integers : ");
	//	if (scanf("%d %d", &i1, &i2) != 2) break;
	//	
	//	int lesser = int_min(i1, i2);

	//	printf("The lesser of %d and %d is %d.\n", i1, i2, lesser);
	//	//printf("The lesser of %d and %d is %d.\n", i1, i2, int_min(i1, i2));
	//}
	//printf("End.\n");

	/* 9.4 변수의 영역과 지역변수 */
	int a;
	a = int_min(1, 2);
	printf("%d\n", a);
	printf("%p\n", &a);
	{
		int a;
		a = int_min(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);

		int b = 123;
	}

	printf("%d\n", a);
	printf("%p\n", &a);

	return 0;
}


int int_min(int i, int j)
{
	int min;
	if (i > j)
		min = j;
	else
		min = i;

	return min;

	//return (i < j) ? i : j;

	//return (float)min;
}