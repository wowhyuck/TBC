#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>		// exit()

int main()
{
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";	// TODO: use scanf(...)
	// 파일 위치
	// 1. VS 내에서 실행을 한다면 해당 프로젝트 폴더에 파일 놓기
	// 2. prompt로 한다면 해당 프로젝트 .exe 있는 폴더에 파일 놓기

	file = fopen(file_name, "r");		// read or write
	if (file == NULL)
	{
		printf("Failed to open file.\n");
		exit(1);
	}

	while ((c = getc(file)) != EOF)
		putchar(c);
	fclose(file);

	return 0;
}