#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void draw(int n);		// ANSI function prototype declaration

int main()
{
	// 5.1: 반복 루프와의 첫 만남
	/*
	int n = 1;					// 초기화
	while (n < 11)				// 조건
	{
		printf("%d\n", n);
		n = n + 1;				// 변화
	}
	*/


	// 5.3: 더하기, 빼기, 부호 연산자들
	/*
	printf("%d\n", 1 + 2);
	int income, salary, bonus;

	income = salary = bonus = 100;		// triple assignment

	salary = 100;
	bonus = 30;

	income = salary + bonus;			// l-value vs r-value

	int takehome, tax;
	tax = 20;
	takehome = income - tax;

	// 부호 연산자
	int a, b;
	a = -7;
	b = -a;
	b = +a;		// + does nothing
	*/


	// 5.4: 곱하기 연산자
	/*
	double seed_money, target_money, annual_interest;

	printf("Input seed money : ");
	scanf("%lf", &seed_money);

	printf("Input target money : ");
	scanf("%lf", &target_money);

	printf("Input annual interest (%%) : ");
	scanf("%lf", &annual_interest);

	double fund = seed_money;
	int year_count = 0;

	while (fund < target_money)
	{
		fund = fund * (1 + (annual_interest / 100));
		year_count++;
		printf("Year: %d, fund: %f\n", year_count, fund);
	}

	printf("It takes %d years\n", year_count);
	*/


	// 5.5: 나누기 연산자
	/*
	printf("Integers divisions\n");
	printf("%d\n", 14 / 7);
	printf("%d\n", 7 / 2);			// 3.5 in floating division
	printf("%d\n", 7 / 3);			// 2.333 in floating division
	printf("%d\n", 7 / 4);			// 1.75 in floating division
	printf("%d\n", 8 / 2);			// 2

	printf("Truncating toward zero (C99)\n");
	printf("%d\n", -7 / 2);			// -3.5 in floating division
	printf("%d\n", -7 / 3);			// -2.333 in floating division
	printf("%d\n", -7 / 4);			// -1.75 in floating division
	printf("%d\n", -8 / 4);			// -2

	printf("\nFloating divisions\n");
	printf("%f\n", 9.0 / 4.0);
	printf("%f\n", 9.0 / 4);		// Note: 4 is integer
	*/


	// 5.7: 나머지 연산자
	/*
	int seconds = 0, minutes = 0, hours = 0;

	printf("Input seconds : ");
	scanf("%d", &seconds);
	while (seconds >= 0) {
		minutes = seconds / 60;
		seconds %= 60;

		hours = minutes / 60;
		minutes %= 60;

		// print results
		printf("%d hours %d minutes %d seconds\n", hours, minutes, seconds);

		printf("Input seconds : ");
		scanf("%d", &seconds);
	}
	printf("Good bye\n");

	// 나머지 연산자는 앞에 있는 피연산자가 음수면 나머지는 음수이다.
	int div, mod;

	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);

	div = 11 / -5;
	mod = 11 % -5;
	printf("div = %d, mod = %d\n", div, mod);

	div = -11 / -5;
	mod = -11 % -5;
	printf("div = %d, mod = %d\n", div, mod);

	div = -11 / 5;
	mod = -11 % 5;
	printf("div = %d, mod = %d\n", div, mod);
	*/

	
	// 5.8: 증가, 감소 연산자
	/*
	int a = 0;
	a++;					// a = a + 1 or a += 1
	printf("%d\n", a);

	++a;					// a = a + 1 or a += 1
	printf("%d\n", a);

	double b = 0;
	b++;
	printf("%d\n", b);

	++b;
	printf("%d\n", b);

	int count = 0;
	while (count < 10)			// try to change count to ++count or count++
	{
		printf("%d\n", count);	// try to change count to ++count or count++
		count++;				// if you try change count, this line must be absented.
	}

	int i = 1, j = 1;
	int i_post, pre_j;

	i_post = i++;
	pre_j = ++j;

	printf("%d %d\n", i, j);
	printf("%d %d\n", i_post, pre_j);

	int i = 3;
	int l = 2 * --i;
	printf("%d %d\n", i, l);

	i = 1;
	l = 2 * i--;
	printf("%d %d\n", i, l);

	// very high precedence
	int x, y, z;
	x = 3; y = 4;
	z = (x + y++) * 5;		// (x + y)++ or x + (y++) ?
	printf("%d %d %d", x, y, z);

	// ++ and -- affect modifiable lvalues
	x = 1; y = 1;
	z = x * y++;			// (x) * (y++), not (x * y)++
	// z = (x * y)++		// error
	// z = 3++;				// error

	// Bad practices	-> 쪼개서 명확하게 아래 예시는 비추천
	int n = 1;
	printf("%d %d\n", n, n * n++);
	x = n / 2 + 5 * (1 + n++);
	y = n++ + n++;
	*/


	// 5.11: 자료형 변환
	/*
	// promotions in assignments
	short s = 64;
	int i = s;

	float f = 3.14f;
	double d = f;

	// demotions in assignments
	d = 1.25;
	f = 1.25;
	f = 1.123;

	// ranking of types in operations
	// long double > double > float
	// unsigned long long, long long
	// unsigned long, long
	// unsigned, int
	// short int, unsigned short int
	// signed char, char, unsigned char
	// _Bool
	// Ref: Goolge 'Integer conversion rank'

	d = f + 1.234;		// double = (float -> double) + double
	f = f + 1.234;		// float = ((float -> double) + double) -> float)

	// automatic promotion of function arguments
	// 1. Functions without prototypes
	// 2. Variadic functions (ellipsis)

	// casting operators
	d = (double)3.14f;
	i = 1.6 + 1.7;
	i = (int)1.6 + (int)1.7;

	// more examples
	char c;
	f = i = c = 'A';	//65
	printf("%c %d %f\n", c, i, d);
	c = c + 2;			// 'C', 67
	i = f + 2 * c;
	printf("%c %d %f\n", c, i, f);		//119
	c = 1106;		// demolition, 1106 = 0b1001010010,		0b1001010010 = 1106 % 256 = 82 = 'R'
	printf("%c\n", c);
	c = 83.99;
	printf("%c\n", c);
	*/


	// 5.12: 함수의 인수와 매개변수
	int i = 5;
	char c = '#';	// 35
	float f = 7.1f;

	draw(i);
	draw((int)c);
	draw((int)f);

	// Arguments vs Parameters
	// actual argument, actual parameter -> argument (values) 값			
	// ex) draw(5) -> argument: 5
	// formal argument, formal parameter -> parameter (variables) 변수	
	// ex) draw(int n) -> parameter: int n

	return 0;
}


void draw(int n)
{
	// TODO: print stars (asterisks)
	int count = 0;
	while (count < n)
	{
		printf("*");
		count++;
	}
	printf("\n");
}