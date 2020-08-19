#include <stdio.h>


int g_int;			// referencing declaration

void fun_third()
{
	g_int += 1;
	printf("g_int in fun_third() %d %p\n", g_int, &g_int);
}


