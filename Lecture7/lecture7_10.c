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
	//	continue;				// continue�� null statement ��ſ� ���� ��찡 ����.

	/* Need to use continue? */
	//char c;
	//while ((c = getchar()) != '\n')
	//{
	//	if (c == 'a')
	//		continue;			// �ǹ����� ���ÿ� ���� �ٸ���.
	//	putchar(c);

	//	//if (c != 'a')
	//	//	putchar(c);

	//}

	/* break */
	//char c;
	//while ((c = getchar()) != '.')
	//	putchar(c);

	//while (1)						// �� ������ ���� ����
	//{
	//	char c = getchar();
	//	if (c == '.')
	//		break;
	//	putchar(c);
	//}

	for (int i = 0; i < 10; i++)			// break�� �ڽ��� �����ϴ� ù��° ������ ���� ���´�.
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