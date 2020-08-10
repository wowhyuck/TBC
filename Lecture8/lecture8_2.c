#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int c;

	//while ((c = getchar()) != EOF)		// End Of File, ctrl + z 입력
	//	putchar(c);							// ctrl + c는 강제 종료

	// stream은 데이터의 흐름
	// stream이 언제 끝나는지를 표시하는 것이 EOF
	while (1)
	{
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return 0;
}