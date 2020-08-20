#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 12.8 ���� ������ �ܺ� ���� external linkage */
/*
	Static variable with external linkage
	- File scope, external linkage, static storage duration
	- External storage class
	- External variables
*/

//int g_int = 0;					// ���������� �ʱ�ȭ�� ���ϸ� �����Ϸ��� 0���� �ʱ�ȭ������
//double g_arr[1000] = { 0.0, };	// �̿��̸� �ʱ�ȭ����
//								// ��� �ȿ��� �ʱ�ȭ�� �Ұ���
//								// �ʱ�ȭ�� �� ���� ����. ��, ���� ���Ͽ� ���� �Ǿ��ִٸ� �� ���Ͽ��� �ʱ�ȭ ����.
//								// �̿��̸� extern �ִ� ������ �ʱ�ȭ �ϴ� ���� ����õ
///*
//	Initializing External Variables
//*/
//int x = 5;						// ok, constant expression
//int y = 1 + 2;					// ok, constant expression
//size_t z = sizeof(int);			// ok, sizeof is a constant expression
////int x2 = 2 * x;				// not ok, x is a variable
//
//void fun()
//{
//	printf("g_int in fun() %d %p\n", g_int, &g_int);
//	g_int += 1;
//}
//
//void fun_sec();


/* 12.9 ���� ������ ���� ���� internal linkage */
/*
	Static variable with internal linkage
	- File scope, external linkage, static storage duration
	- Internal storage class
*/
//static int g_int = 123;				// defining declaration
//
//void fun();
//void fun_second();
//void fun_third();


/* 12.11 �Լ��� ���� ���� �з�*/
/*
	Storage Classes and Functions
	- Functions external (by default) or static
	- A function declaration is assumed to be extern
*/
int g_int = 123;				// defining declaration
// TODO: try static

void fun();
void fun_second();


int main()
{
	/* 12.8 ���� ������ �ܺ� ���� external linkage */
	/*
		defining declaration vs referencing declaration
	*/

	//extern int g_int;				// Optional
	////extern int g_int = 1024;		// Error in block scope

	////int g_int = 123;				// hides global g_int

	//extern double g_arr[];			// optional, size is not necessary

	//printf("g_int in main() %d %p\n", g_int, &g_int);
	//g_int += 1;

	//fun();
	//fun_sec();


	/* 12.9 ���� ������ ���� ���� internal linkage */
	//fun();
	//fun_second();
	//fun_third();


	/* 12.11 �Լ��� ���� ���� �з�*/
	fun();
	fun_second();

	return 0;
}


void fun()
{
	extern int g_int;			// Optional

	g_int += 1;
	printf("g_int in fun() %d %p\n", g_int, &g_int);
}





