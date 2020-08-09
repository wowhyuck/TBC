#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	/* continue */
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 5)
	//		continue;
	//	printf("%d ", i);
	//}
	//printf("\n");

	/* break */
	//for (int i = 0; i < 10; i++)
	//{
	//	if (i == 5)
	//		break;
	//	printf("%d ", i);
	//}

	/* while and continue */
	//int count = 0;
	//while (count < 5)
	//{
	//	int c = getchar();
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//	count++;
	//}

	/* for and continue */
	//for (int count = 0; count < 5; count++)
	//{
	//	int c = getchar();
	//	if (c == 'a')
	//		continue;
	//	putchar(c);
	//}

	/* continue as a placeholder */
	//while (getchar() != '\n')
	//	continue;				// continue는 null statement 대신에 쓰는 경우가 많다.

	/* Need to use continue? */
	//char c;
	//while ((c = getchar()) != '\n')
	//{
	//	if (c == 'a')
	//		continue;			// 실무에서 선택에 따라 다르다.
	//	putchar(c);

	//	//if (c != 'a')
	//	//	putchar(c);

	//}

	/* break */
	//char c;
	//while ((c = getchar()) != '.')
	//	putchar(c);

	//while (1)						// 이 패턴이 자주 사용됨
	//{
	//	char c = getchar();
	//	if (c == '.')
	//		break;
	//	putchar(c);
	//}

	for (int i = 0; i < 10; i++)			// break는 자신을 포함하는 첫번째 루프만 깨고 나온다.
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
				break;

			printf("(%d %d)", i, j);
		}

		printf("\n");
	}

	return 0;
}