#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	/* 11.10 명령줄 인수 */
	//int count;
	//printf("The command line has %d arguments:\n", argc);

	//for (count = 0; count < argc; count++)
	//	printf("Arg %d : %s\n", count, argv[count]);
	//printf("\n");

	/* 11.11 문자열을 숫자로 바꾸는 방법들*/
	/*
		string to integer, double, long
		atoi(), atof(), atol()
	*/
	//if (argc < 3)
	//	printf("Wrong Usage of %s\n", argv[0]);
	//else
	//{
	//	/* Example 1 */
	//	int times = atoi(argv[1]);
	//	// atof(), atol()

	//	for (int i = 0; i < times; i++)
	//		puts(argv[2]);

	//	/* Example 2 */
	//	//printf("Sum = %d\n", atoi(argv[1]) + atoi(argv[2]));
	//}

	/*
		string to long, unsigned long, double
		strtol(), strtoul(), strtod()
	
		strtod() converts base 10 only
	*/
	//char str1[] = "1024Hello";
	//char* end;
	//long l = strtol(str1, &end, 10);
	//printf("%s %ld %s %d\n", str1, l, end, (int)*end);

	//char str2[] = "10FFHello";
	//char* end;
	//long l = strtol(str2, &end, 16);
	//printf("%s %ld %s %d\n", str2, l, end, (int)*end);

	/*
		Numbers to strings
		Use sprintf() instead of itoa(), ftoa()
	*/
	char temp[100];
	puts(_itoa(10, temp, 16));

	sprintf(temp, "%X", 10);
	puts(temp);

	return 0;
}