#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	Automatic storage class
	- Automatic storage duration, block scope, no linkage
	- Any variable declared in a block or function header
*/

void func(int k);

void temp(register int r)
{
	// do something with r
}

int main()				// Note: main() is a function.
{
	auto int a;			// keyword auto: a storage-class specifier
	a = 1024;
	//printf("%d\n", a);			// What happens if uninitialized?
	//auto int b = a * 3;			// What happens if uninitialized?

	int i = 1;
	int j = 2;

	printf("i %lld\n", (long long)&i);
	{
		int i = 3;			// name hiding
		printf("i %lld\n", (long long)&i);

		int ii = 123;

		// j is visible here
		printf("%d\n", j);
	}
	// ii is not visible.

	printf("i %lld\n", (long long)&i);		// which i?

	for(int m=1; m<2;m++)
		printf("m %lld\n", (long long)&m);	// no block?

	func(5);		// cannot see any of the variabled defined so far.

	for (int m = 3; m < 4; m++)
	{
		printf("m %lld\n", (long long)&m);	// block?
	}

	/* 12.6 레지스터 변수 */
	//register int r;
	//r = 123;

	////printf("%p\n", &r);
	////int* ptr = &r;			// register 변수는 주소를 가지고 올 수 없다.

	return 0;
}


void func(int k)
{
	int i = k * 2;
	// do something with i and k
	printf("i %lld\n", (long long)&i);
}
