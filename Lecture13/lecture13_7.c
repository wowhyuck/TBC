#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main()
{
	FILE* fp;
	int ch;

	/* ungetc() */
	//fp = fopen("input.txt", "r");

	//ch = fgetc(fp);
	//fputc(ch, stdout);

	//ungetc(ch, fp);				// try another characters
	////ungetc((int)'A', fp);				

	//ch = fgetc(fp);
	//fputc(ch, stdout);

	//fclose(fp);

	/* setvbuf() */
	//fp = fopen("input.txt", "r");

	//char buffer[32] = { '\0', };

	//setvbuf(fp, buffer, _IOFBF, sizeof(buffer));		// _IOLBF, _IOFBF, _IONBF

	//ch = fgetc(fp);			// Read just only a single character!

	//// dump buffer
	//for (int i = 0; i < sizeof(buffer); i++)
	//	printf("%c", buffer[i]);
	//printf("\n");

	//fclose(fp);

	/* fflush() */
	// Writing a large amount of data
	// fflush(fp);


	return 0;
}