#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "DifferentFile.h"

void different_function();

int main()
{
	printf("__FILE__: %s\n", __FILE__);
	printf("__DATE__: %s\n", __DATE__);
	printf("__TIME__: %s\n", __TIME__);
	printf("__LINE__: %s\n", __LINE__);
	printf("__func__: %s\n", __func__);

	different_function();

	different_func_in_different_file();

	/* Not defined in VS */


	return 0;
}


void different_function()
{
	printf("This function is %s\n", __func__);
	printf("This line is %s\n", __LINE__);
}
