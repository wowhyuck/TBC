#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>				// pow()
#include <string.h>				// strlen()
#include <stdlib.h>				// exit()
#include <stdbool.h>

unsigned char to_decimal(const char bi[]);
void print_binaray(const unsigned char num);


int main()
{
	unsigned char i = to_decimal("01000110");
	unsigned char mask = to_decimal("00000101");

	print_binaray(i);
	print_binaray(mask);
	print_binaray(i & mask);

	/*
		Decimal to binary
		
				 Number		Mask		 Mask
		2^7 :	(01000110 & 10000000) != 10000000	print 0	
		2^6 :	(01000110 & 01000000) == 01000000	print 1	
		2^5 :	(01000110 & 00100000) != 00100000	print 0	
		2^4 :	(01000110 & 00010000) != 00010000	print 0	
		2^3 :	(01000110 & 00001000) != 00001000	print 0	
		2^2 :	(01000110 & 00000100) == 00000100	print 1	
		2^1 :	(01000110 & 00000010) == 00000010	print 1	
		2^0 :	(01000110 & 00000001) != 00000001	print 0	
	*/

	return 0;
}


unsigned char to_decimal(const char bi[])
{
	int result = 0;
	for (int i = 0; i < strlen(bi); i++)
	{
		if (bi[i] == '1')
		{
			result += (int)pow(2, (strlen(bi) - i - 1));
		}
	}
	return result;
}

void print_binaray(const unsigned char num)
{
	printf("Decimal %3d \t == Binary ", num);

	const size_t bits = sizeof(num) * 8;
	for (size_t i = 0; i < bits; i++)
	{
		const unsigned char mask =
			(unsigned char)pow((double)2, (double)(bits - 1 - i));
		//unsigned char mask = pow(2, (bits - 1 - i));

		if ((num & mask) == mask)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	printf("\n");
}
