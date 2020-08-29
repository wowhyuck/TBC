#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "Header_B.h"
//#include "Header_A.h"

/*
	#define, #undef, #if, #ifdef, #ifndef, #else, #elif, #endif
*/

/*
	#undef
*/

#define LIMIT 400
//#undef LIMIT			// It's ok to undefine previously NOT defined macro.

/*-------------------------------------------------------------------------*/
//#define TYPE 1
//
//#if TYPE == 1
//#include "my_function_1.h"
//#elif TYPE == 2
//#include "my_function_2.h"
//#else
//static void my_function()
//{
//	printf("Wrong compile option!");
//}
//#endif

/*-------------------------------------------------------------------------*/

//int sum(int i, int j)
//{
//	int s = 0;
//	for (int k = i; k <= j; k++)
//	{
//		s += k;
//
//#ifdef _DEBUG			// TODO: change in project properties 
//		// Project Properties -> C/C++ preprocess -> preprocessor definition에서 정의 가능
//		printf("%d %d\n", s, k);
//#endif
//	}
//
//	return s;
//}

/*-------------------------------------------------------------------------*/

//#undef _WIN64

void say_hello()
{
#ifdef _WIN64			// #if defined (_WIN64)
	printf("Hello, WIN64\n");
#elif _WIN32
	printf("Hello, WIN32\n");
#elif __linux__
	printf("Hello, linux\n");
#endif
}




int main()
{
	//printf("%d\n", LIMIT);

	/*----------------------*/

	//test_function_A();
	//test_function_B();

	/*----------------------*/

	//my_function();

	/*----------------------*/

	//printf("\n%d \n", sum(1, 10));

	/*----------------------*/

	say_hello();

	return 0;
}