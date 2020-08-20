#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>			// malloc(), free()


int main()
{
	printf("Dummy Output\n");
	{
		int n = 100000000;
		int* ptr = (int*)malloc(sizeof(int) * n);

		if (!ptr)		// if (ptr != NULL)
		{
			printf("malloc() failed\n");
			exit(EXIT_FAILURE);
		}

		for (int i = 0; i < n; i++)
			ptr[i] = i + 1;
		printf("%d %d\n", ptr[0], ptr[1]);

		free(ptr);
		//ptr = NULL;
	}

	// what happens?

	printf("Dummy Output\n");

	return 0;
}