/*
 *	Written by J. -M. Hong.
 */

#include <stdio.h>

void say_hello();	// prototyping, function declaration


int main()
{
	// 2.5 변수를 선언하는 방법
	int x, sum;		// declaration
	int y = 4;		// initialization
	x = 1;			// assignment

	sum = x + y;		// add two numbers


	// 2.6 printf() 함수의 기본적인 사용법
	// printf = print formated
	printf("\"The truth is ...\nI am Ironman.\"\n");
	// \n: escape sequence

	printf("The answer is %i\n", sum);
	printf("%i + %i = %i\n\n\n", x, y, sum);
	printf("\a");	// \a: 경보음


	// 2.9 함수 만들기
	say_hello();


	// 2.11 문법 오류와 문맥 오류
	int n1, n2, n3, n4;

	n1 = 2;
	n2 = n1 * n1;
	n3 = n2 * n1;
	n4 = n2 * n1;


	return 0;
}


void say_hello()	// function definition
{
	printf("Hello, World!\n");
}
