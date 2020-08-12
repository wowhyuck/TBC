#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	//int a = 1234;
	//printf("%d\n", a);
	//printf("%p\n", &a);

	//int* ptr = 1234;			// 포인터 초기화할 때 변수 주소로 할 것, 해당 예시는 안좋은 경우
	//printf("%d\n", *ptr);
	//printf("%p\n", ptr);

	//int* safer_ptr = NULL;		// 보통 포인터 선언할 때, NULL 포인터로 초기화한다.
	//int a = 123;				// NULL 포인터로 초기화함으로써 런타임 에러를 예방
	///* safer_ptr = &a; */

	//int b;
	//scanf("%d", &b);

	//if (a % 2 == 0)
	//	safer_ptr = &a;

	//if (safer_ptr != NULL)
	//	printf("%p\n", safer_ptr);
	//if (safer_ptr != NULL)
	//	printf("%d\n", *safer_ptr);


	/* 9.16: 디버거로 메모리 들여다보기 */
	// 디버거를 켠 후, Debug -> Windows -> Memory
	int a = 3, b = 5, c = 7, d = 9;
	int* a_ptr = &a, * b_ptr = &b, * c_ptr = &c, * d_ptr = &d;
	
	printf("%d %d %d %d", &a, &b, &c, &d);

	return 0;
}