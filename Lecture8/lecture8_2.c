#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int c;

	//while ((c = getchar()) != EOF)		// End Of File, ctrl + z �Է�
	//	putchar(c);							// ctrl + c�� ���� ����

	// stream�� �������� �帧
	// stream�� ���� ���������� ǥ���ϴ� ���� EOF
	while (1)
	{
		c = getchar();
		printf("%d\n", c);
		if (c == EOF)
			break;
	}

	return 0;
}