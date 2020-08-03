#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>			// malloc
#include <string.h>			// strlen and more
#include <limits.h>			// INT_MAX, ..., etc.
#include <float.h>			// FLT_MAX, ..., etc.
#include <inttypes.h>		// intmax_t

#define PI 3.141592f		// manifest constans, sybolic constants
#define AI_NAME "Friday"	// 관습적으로 이름은 대문자

struct Mystruct 
{
	int i;
	float f;
};


int main()
{
	// 4.1: 문자열 입출력하기
	/*
	char fruit_name[40];	// stores only one character.

	printf("What is your favorite fruit?\n");

	scanf("%s", fruit_name);	// be careful with &

	printf("You like %s!\n", fruit_name);
	*/


	// 4.2: sizeof 연산자
	/*
	// 1. sizeof basic types
	int a = 0;
	unsigned int int_size1 = sizeof a;
	unsigned int int_size2 = sizeof(int);
	unsigned int int_size3 = sizeof(a);

	size_t int_size4 = sizeof(a);
	size_t float_size = sizeof(float);

	printf("Size of int type is %u bytes.\n", int_size1);
	printf("Size of int type is %zu bytes.\n", int_size4);
	printf("Size of float type is %zu bytes.\n", float_size);

	// 2. sizeof character array
	int int_arr[30];	// int_arr[0] = 1024; ...
	int* int_ptr = NULL;
	int_ptr = (int*)malloc(sizeof(int) * 30);	// int_ptr[0] = 1024; ...

	printf("Size of array = %zu bytes.\n", sizeof(int_arr));
	printf("Size of pointer = %zu bytes.\n", sizeof(int_ptr));

	// 3. sizeof character array
	char c = 'a';
	char string[10];	// maximally 9 character + '/0' (null character)

	size_t char_size = sizeof(char);
	size_t str_size = sizeof(string);

	printf("Size of char type is %zu bytes.\n", char_size);
	printf("Size of string type is %zu bytes.\n", str_size);

	// 4. sizeof struture
	printf("Size of Mystruct is %zu bytes.\n", sizeof(struct Mystruct));
	*/


	// 4.3: 문자열이 메모리에 저장되는 구조
	/*
	int a = 1;
	int int_arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%i %i %i\n", int_arr[0], int_arr[1], int_arr[9]);

	char c = 'a';
	char str1[10] = "Hello";	// null character 포함
	char str2[10] = { 'H', 'i' };
	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%hhi %hhi %hhi %hhi %hhi\n",
		str2[0], str2[1], str2[2], str2[3], str2[4]);

	//char str3[10] = "Hello, World";	// array is not enough
	char str3[20] = "Hello, \0World";	// null character를 만나면 뒤에 문자는 스킵
	printf("%s\n", str3);
	printf("%c\n", str3[10]);	// 문자는 무시되도 메모리에 저장되어 있음
	*/


	// 4.4: strlen() 함수
	/*
	char str1[100] = "Hello";
	char str2[] = "Hello";
	char str3[100] = "\0";
	char str4[100] = "\n";

	printf("%zu %zu\n", sizeof(str1), strlen(str1));
	printf("%zu %zu\n", sizeof(str2), strlen(str2));
	printf("%zu %zu\n", sizeof(str3), strlen(str3));
	printf("%zu %zu\n", sizeof(str4), strlen(str4));

	// Extra
	char* str5 = (char*)malloc(sizeof(char) * 100);
	str5[0] = 'H'; str5[1] = 'e'; str5[2] = 'l'; str5[3] = 'l'; str5[4] = 'o';
	str5[5] = '\0';
	printf("%zu %zu\n", sizeof(str5), strlen(str5));
	*/


	// 4.5: 기호적 상수와 전처리기
	/*
	//const float pi = 3.141592f;	// c++일 때 const를 쓰는 것은 선호

	float radius, area, circum;
	printf("I am %s.\n", AI_NAME);
	printf("Please, input radius.\n");
	scanf("%f", &radius);
	
	area = PI * radius * radius;	// area = pi * r * r
	circum = 2.0f * PI * radius;	// circum = 2.0 * pi * r
	printf("Area is %f.\n", area);
	printf("Circumference is %f.\n", circum);
	*/


	// 4.6: 명백한 상수들 (manifest constants)
	/*
	printf("PI is %f.\n", PI);
	printf("Biggest int: %d\n", INT_MAX);
	printf("One byte in this system is %d bits.\n", CHAR_BIT);
	printf("Smallest normal float is %e.\n", FLT_MIN);
	*/


	// 4.7: printf() 함수의 변환 지정자들
	/*
	double d = 3.1415926535897932384626433832795028841971693993751058209749445;
	
	printf("%c\n", 'A');
	printf("%s", "I love you.\n");
	printf("Even if there's a small chance, \
we owe this to everyone who's not in this room to try.\n");
	
	printf("\n");
	printf("%d %i %i %i\n", 1004, 1234, INT_MAX, UINT_MAX);	// Note overflow
	printf("%u %u %u\n", 1024, -1, UINT_MAX);				// Note overflow

	printf("\n");
	printf("%f %f %lf\n", 3.141592f, d, d);	// l in %lf is ignored
	printf("%a %A\n", d, d);
	printf("%e %E\n", d, d);

	printf("\n");
	printf("%g %g\n", 123456.789, 123456.78);
	printf("%G %G\n", 123456.789, 123456.78);
	printf("%g %g\n", 0.00012345, 0.000012345);
	printf("%G %G\n", 0.00012345, 0.000012345);

	printf("\n");
	printf("\o\n", 9);
	printf("%p\n", &d);	// pointer-of operator

	printf("\n");
	printf("%x %X\n", 11, 11);
	printf("%%\n", d);	// Note the warning. d is ignored.

	printf("\n");
	printf("%9d\n", 12345);
	printf("%09d\n", 12345);
	printf("%.2f\n", 3.141592);
	printf("%.20f %.20lf\n", d, d);

	printf("\n");
	int n_printed = printf("Counting!");
	printf("%u\n", n_printed);	// printf 함수의 글자 개수
	*/


	// 4.8: 변환 지정자의 수식어들
	/*
	printf("%10i\n", 1234567);			// '-' 없을 때 오른쪽 정렬
	printf("%-10i\n", 1234567);			// '-' 있을 때 왼쪽 정렬
	printf("%+i %+i\n", 123, -123);		// '+' 있을 때 부호 표시
	printf("% i % i\n", 123, -123);		// 빈칸일 때 빈칸 표시. 단, 음수일 때 빈칸에 '-'표시
	printf("%X\n", 17);					// 16진수 표시
	printf("%#X\n", 17);				// #을 붙이면 0X로 16진수 표현
	printf("%05i\n", 123);				// 0이 붙으면 남는 자리에 0 추가
	printf("%*i\n", 7, 456);			// *에 7 숫자를 대입

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);				// 1024가 정밀도 3보다 크므로 1024로 출력
	printf("%.5d\n", 1024);				// 정밀도가 5이므로 01024로 출력
	printf("%.3d\n", 123456.1234567);	
	printf("%.3d\n", 123456.1235);
	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJK");
	printf("%.s\n", "ABCDEFGHIJK");		// 숫자가 없으면 .0으로 간주

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);
	*/


	// 4.9: printf() 함수가 인자들을 해석하는 과정
	/*
	float n1 = 3.14;	// 4 bytes
	double n2 = 1.234;	// 8 bytes
	int n3 = 1024;		// 4 bytes

	printf("%f %f %d\n\n", n1, n2, n3);

	// Note the warnings in output window
	printf("%d %d %d\n\n", n1, n2, n3);			// 4, 4, 4 (N, N, N) 사이즈가 맞지 않아서 밀림
	printf("%lld %lld %d\n\n", n1, n2, n3);		// 8, 8, 4 (N, N, Y) 타입이 맞지 않아서 오류
	printf("%f %d %d\n\n", n1, n2, n3);			// 8, 4, 4 (Y, N, N) 사이즈와 타입이 맞지 않아서 오류
	printf("%f %lld %d\n\n", n1, n2, n3);		// 8, 8, 4 (Y, N, Y) 타입이 맞지 않아서 오류
	*/


	// 4.10: scanf() 함수의 사용법
	/*
	// multiple inputs with blank seperators
	//int i;
	//float f;
	//char str[30];
	//scanf("%d %f %s", &i, &f, str);	// Note % is absent in front of str
	//printf("%d %f %s\n", i, f, str);

	// character
	//char c;
	//scanf("%c", &c);	// try blank
	//printf("%i\n", c);	// blank is 32

	// unsigned as signed
	//unsigned i;
	//scanf("%i", &i);	// try negative number
	//printf("%i\n", i);

	// unsigned as unsigned
	//unsigned i2;
	//scanf("%u", &i2);	// try negative number
	//printf("%u\n", i2);

	// floating point number
	// l for double for %f, %e, %E, %g
	//double d = 0.0;
	//scanf("%lf", &d);	// lf, try E notation
	//printf("%f\n", d);	// f

	// width
	//char str[30];
	//scanf("%5s", str);	// width
	//printf("%s\n", str);

	// h modifier
	//char i;
	//scanf("%hhd", &i);	// try large numbers
	//printf("%i\n", i);

	// integer with characters
	//int i;
	//scanf("%i", &i);	// try '123ab', '123a456'
	//printf("%i\n", i);

	// j modifier
	//intmax_t i;
	//scanf("%ji", &i);
	//printf("%ji", i);

	// regular characters
	//int a, b;
	//scanf("%d,%d", &a, &b);	// try blank seperator only
	//scanf("%d ,%d", &a, &b);
	//scanf("%d, %d", &a, &b);
	//scanf("%d,%d", &a, &b);
	//scanf("%d-%d", &a, &b);
	//scanf("%dA%d", &a, &b);
	//printf("%d %d\n", a, b);

	// char receives blank
	//int a, b;
	//char c;
	//scanf("%d%c%d", &a, &c, &b);	// try 123 456 (blank)
	//printf("%d|%c|%d", a, c, b);	// | is seperator

	// sentences?, gatchar(), fgets(), etc.

	// return value of scanf()
	//int a, b;
	//int i = scanf("%d%d", &a, &b);
	//printf("%d", i);				// 입력 받은 수 출력

	// * modifier for printf()
	//int i = 123;
	//int width = 5;	// from script file, scanf, etc.
	//printf("Input width: ");
	//scanf("%d", &width);
	//printf("%*d\n", width, i);

	// * modifier for scanf()
	int i;
	scanf("%*d%*d%d", &i);				// *는 무시
	printf("Your third input = %d", i);
	*/

	return 0;
}