#include <stdio.h>

/* 12.3 변수의 영역과 연결 상태, 객체의 지속 기간 */
//extern int el;
//// extern int il;
//
//void testLinkage()
//{
//	printf("DoSomething called\n");
//	printf("%d\n", el);
//	//printf("%d\n", il);
//	//printf("%d\n", dodgers);
//
//	el++;
//}

/* 12.8 정적 변수의 외부 연결 external linkage */
//extern g_int;

//void temp()
//{
//	extern g_int;
//
//	g_int += 1000;
//}
//
//
//void fun_sec()
//{
//	extern g_int;
//
//	temp();
//
//	g_int += 7;
//	printf("g_int in fun_sec() %d %p\n", g_int, &g_int);
//}


/* 12.9 정적 변수의 내부 연결 internal linkage */
static int g_int;			// referencing declaration

void fun_second()
{
	g_int += 1;
	printf("g_int in fun_second() %d %p\n", g_int, &g_int);
}


