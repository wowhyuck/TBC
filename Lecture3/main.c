/*
VS에서 scanf()를 쓸 때
#define _CRT_SECURE_NO_WARNINGS 작성
또는 project의 properties->preprocessor->preprocessor definition에서 
_CRT_SECURE_NO_WARNINGS 추가
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <inttypes.h>
#include <float.h>
#include <stdbool.h>
#include <complex.h>


int main()
{
	// 3.3: scanf() 함수의 기본적인 사용법
	// 3.4: 간단한 입출력 프로그램 만들기
	/*
	int i = 0, j = 0;
	int sum = 0;

	printf("Input two integers\n");
	scanf("%d%d", &i, &j);	// &: ampersand

	sum = i + j;

	printf("%d + %d = %d\n", i, j, sum);
	*/

	/* 환율 계산기
	float won = 0;
	float dollar = 0;

	printf("Input Won\n");
	scanf("%f", &won);

	dollar = 0.00089f * won;

	printf("Dollar = %f\n", dollar);
	*/


	// 3.6: 정수의 오버플로우
	/*
	unsigned int i = 0b11111111111111111111111111111111;
	unsigned int u_max = UINT_MAX;
	unsigned int u_min = 0;
	signed int i_max = INT_MAX;
	signed int i_min = INT_MIN;
	printf("%u\n", i);
	printf("%u\n", u_max);
	printf("%u\n", u_min);
	printf("%d\n", i_max);
	printf("%d\n", i_min);

	u_max = UINT_MAX + 1;	// 1111 + 0001 = 0000
	u_min = 0 - 1;			// 0000 - 0001 = 1111
	printf("%u\n", u_max);

	// i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2);

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);
	*/


	// 3.7: 다양한 정수들
	/*
	char c = 65;
	short s = 200;
	unsigned int ui = 3000000000U;	// 3'000'000'000U <- c++에선 허용
	long l = 65537L;
	long long ll = 12345678908642LL;	// 12'345'678'908'642LL

	printf("char = %hhd, %d, %c\n", c, c, c);
	printf("short = %hhd, %hd, %d\n", s, s, s);
	printf("unsigned int = %u, %d\n", ui, ui);
	printf("long = %ld, %hd\n", l, l);
	printf("long long = %lld, %ld\n", ll, ll);
	*/


	// 3.8: 8진수와 16진수
	/*
	unsigned int decimal = 4294967295;
	unsigned int binary = 0b11111111111111111111111111111111;
	unsigned int oct = 037777777777;
	unsigned int hex = 0xffffffff;

	printf("%u\n", decimal);
	printf("%u\n", binary);
	printf("%u\n", oct);
	printf("%u\n", hex);

	printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);
	*/
	

	// 3.9: 고정너비 정수
	/*
	int i;
	int32_t i32;		// 32 bit integer
	int_least8_t i8;	// smallest 8 bit
	int_fast8_t f8;		// fastest minimum
	intmax_t imax;		// biggest signed integers
	uintmax_t uimax;	// biggest unsigned integers

	i32 = 1004;

	printf("me32 = %d\n", i32);
	printf("me32 = %" "d" "\n", i32);
	printf("me32 = %" PRId32 "\n", i32);
	*/

	
	// 3.10: 문자형
	/*
	char c = 'A';
	char d = 65;	// d = 'A'

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	printf("%c \n", c + 1);

	char a = '\a';
	printf("%c", a);
	printf("\07");	// 8진수 7
	printf("\x7");	// 16진수 7

	float salary;
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("AB\tCDF\n");
	printf("ABC\tDF\n");

	printf("\\ \'HA+\' \"Hello\"\?\n");
	*/


	// 3.11: 부동소수점형
	/*
	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long double));

	float f = 123.456f;
	double d = 123.456;

	float f2 = 123.456;
	double d2 = 123.456f;

	int i = 3;
	float f3 = 3.f;	// 3.0f
	double d3 = 3.;	// 3.0

	float f4 = 1.234e10f;
	
	float f5 = 0x1.1p1;		// 10진수는 e, 16진수는 p
	double d5 = 1.0625e0;

	printf("%f %F %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A\n", f5, f5);
	printf("%a %A\n", d5, d5);
	*/

	
	// 3.12: 부동소수점의 한계
	/*
	// round-off errors (ex1)
	float a, b;
	a = 1.0E20f + 1.0f;
	b = a - 1.0E20f;
	printf("%f\n", b);

	// round-off errors (ex2)
	a = 0.0f;
	for (int i = 0; i < 100; i++) 
	{
		a = a + 0.01f;
	}
	printf("%f\n", a);

	// overflow
	float max = 3.402823466e+38F;
	printf("%f\n", max);
	max = max * 100.0f;
	printf("%f\n", max);

	// underflow
	float min = 1.401298464e-45F;
	printf("%e\n", min);
	min = min / 2.0f;	// subnormal
	printf("%e\n", min);
	*/

	
	// 3.13: 불리언형
	/*
	printf("%u byte\n", sizeof(_Bool));	// 1 byte

	_Bool b1;
	b1 = 0;	// false
	b1 = 1;	// true
	printf("%d\n", b1);

	bool b2, b3;
	b2 = true;
	b3 = false;
	printf("%d %d\n", b2, b3);
	*/

	return 0;
}
