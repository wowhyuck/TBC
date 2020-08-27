#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "other.c"

int iamfunction()
{
	return 0;
}

int a = 123;


int main()
{
	/*
		Namespace
		- Identify parts of a program in which a name a recognized
		- You can use the same name for one variable and one tag.
		- C++: use 'namespace' to use the same identifiers in the duplicated scopes.
	*/

	{
		int my_name = 345;
		// double my_name = 3.14;		// Error
	}

	struct rect { double x; double y; };

	//int rect = 123;				// OK in C (Not OK in C++)
	struct rect rect = { 1.1, 2.2 };	// struct rect and rect are in different categories

	/*
		typedef struct rect rect;
		rect rect = { 1.1, 2.2 };		// Not OK
	*/

	//int iamfunction = iamfunction();		// Error

	/*
		Namespace pollution (KNN p.465)
		- Names in different files accidentally conflicting with each other
	*/

	//printf("%d\n", a);			// other.c

	return 0;
}