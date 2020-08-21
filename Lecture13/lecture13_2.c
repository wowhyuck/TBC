#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	int ch;
	FILE* fr, *fw;				// TODO: file pointer to write

	const char* out_filename = "output.txt";			// TODO: Use this


	/*
	typedef struct _iobuf
	{
		char*	_ptr;
		int		_cnt;
		char*	_base;
		int		_flag;
		int		_file;
		int		_charbuf;
		char*	_tmpfname;
	}FILE;
	*/


	unsigned long count = 0;

	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fr = fopen(argv[1], "r")) == NULL)			// Open a text file for reading
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fw = fopen(out_filename, "w")) == NULL)			// Open a text file for writing
	{
		printf("Can't open %s\n", out_filename);
		exit(EXIT_FAILURE);
	}


	/*
		fopen mode strings for text files
		- r: reading
		- w: creating-and-writing or over-writing
		- a: appending or creating-and-writing
		- r+: both reading and writing
		- w+: reading and writing, over-writing or creating
		- a+: reading and writing, appending or creating
	*/

	// TODO: open file to write with 'w' mode string

	while ((ch = fgetc(fr)) != EOF)			// getc(fr)
	{
		// putc(ch, stdout);			// same as putchar(ch);
		fputc(ch, stdout);

		// TODO: use fputs() to write a file stream
		fputc(ch, fw);

		count++;
	}

	fclose(fr);
	// TODO
	fclose(fw);

	printf("FILE %s had %lu characters\n", argv[1], count);
	printf("Copied to %s", out_filename);

	return 0;
}