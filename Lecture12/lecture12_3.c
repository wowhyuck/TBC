#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Variable scopes (visibility)
	- block, function, function prototype, file.
*/

int g_i = 123;			// global variable
int g_j;				// global variable

void func1()
{
	g_i++;				// uses g_i
}

void func2()
{
	g_i += 2;			// uses g_i

	//local = 456;		// Error
}

void f1(int hello, double world);		// to the end of the prototype declaration
//void vla_param(int n, int m, double arr[n][m]);			// gcc only

double func_block(double d)
{
	double p = 0.0;

	int i;
	for (i = 0; i < 10; i++)
	//for (int i = 0; i < 10; i++)		// C99
	{
		double q = d * i;
		p *= q;

		if (i == 5)
			goto hello;
	}

hello:
	printf("Hello, World!");

	return p;
}


/*
	Linkage

	Variable with block scope, function scope, or function prototype scope
	- No linkage

	File scope variable
	- External or internal linkage
*/

// translation unit
int el;						// file scope with external linkage (global variable)
static int il;				// file scope with internal linkage

void testLinkage();


/* 
	Storage duration:
	- static storage duration
	(Note: 'static' keyword indicates the linkage type, not the storage duration)
	- automatic storage duration
	- allocated storage duration
	- thread storage duration
*/

void count()
{
	int ct = 0;							// 함수가 끝나면 사라짐
	printf("count = %d\n", ct);
	ct++;
}

void static_count()
{
	static int ct = 0;					// 프로그램이 끝날 때까지 유지
	printf("count = %d\n", ct);
	ct++;
}


int main()
{
	//int local = 1234;

	//func1();
	//func2();

	//printf("%d\n", g_i);		// uses g_i
	//printf("%d\n", g_j);		// Not initialized?
	//printf("%d\n", local);

	//func_block(1.0);

	/* Linkage */
	//el = 1024;
	//testLinkage();
	//printf("%d\n", el);

	/* Duration */
	count();
	count();
	static_count();
	static_count();

	return 0;
}


void f1(int hello, double world)
{

}

//void vla_param(int n, int m, double arr[n][m])
//{
//
//}