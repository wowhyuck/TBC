#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//int a = 1234;
	//printf("%d\n", a);
	//printf("%p\n", &a);

	//int* ptr = 1234;			// ������ �ʱ�ȭ�� �� ���� �ּҷ� �� ��, �ش� ���ô� ������ ���
	//printf("%d\n", *ptr);
	//printf("%p\n", ptr);

	//int* safer_ptr = NULL;		// ���� ������ ������ ��, NULL �����ͷ� �ʱ�ȭ�Ѵ�.
	//int a = 123;				// NULL �����ͷ� �ʱ�ȭ�����ν� ��Ÿ�� ������ ����
	///* safer_ptr = &a; */

	//int b;
	//scanf("%d", &b);

	//if (a % 2 == 0)
	//	safer_ptr = &a;

	//if (safer_ptr != NULL)
	//	printf("%p\n", safer_ptr);
	//if (safer_ptr != NULL)
	//	printf("%d\n", *safer_ptr);


	/* 9.16: ����ŷ� �޸� �鿩�ٺ��� */
	// ����Ÿ� �� ��, Debug -> Windows -> Memory
	int a = 3, b = 5, c = 7, d = 9;
	int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;
	
	printf("%d %d %d %d", &a, &b, &c, &d);

	return 0;
}