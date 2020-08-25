#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>		// strlen(), strcmp()
#include <stdlib.h>		// malloc(), free()

#define SLEN 30

struct namect {
	char* fname;		// Use malloc()
	char* lname;		// Use malloc()
	int letters;
};

void getinfo(struct namect*);				// allocate memory
void makeinfo(struct namect*);
void showinfo(const struct namect*);
void cleanup(struct namect*);				// free memory when done
char* s_gets(char* st, int n);

int main()
{
	//struct namect p = { "Joohyuck", "Seo" };
	//printf("%s %s\n", p.fname, p.lname);

	///*
	//	Dangerous usage
	//*/
	////int f1 = scanf("%[^\n]%*c", p.lname);
	////printf("%s %s\n", p.lname, p.fname);

	///*
	//	Recommend usage
	//*/
	//char buffer[SLEN] = { 0, };
	//int f2 = scanf("%[^\n]%*c", buffer);
	//p.fname = (char*)malloc(strlen(buffer) + 1);
	//if (p.fname != NULL)
	//	strcpy(p.fname, buffer);
	//printf("%s %s\n", p.fname, p.lname);

	/* Problem */
	struct namect person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}


void getinfo(struct namect* nc)
{
	int flag;
	char temp[SLEN] = { 0, };

	printf("Please enter your first name.\n");
	//s_gets(nc->fname, SLEN);
	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong input");		// TODO: receive input again
	else
	{
		nc->fname = (char*)malloc(strlen(temp) + 1);		// + 1 is for '\0'
		if (nc->fname != NULL)
			strcpy(nc->fname, temp);
		else
			printf("Malloc() failed");
	}

	printf("Please enter your last name.\n");
	//s_gets(nc->lname, SLEN);
	flag = scanf("%[^\n]%*c", temp);
	if (flag != 1)
		printf("Wrong input");		// TODO: receive input again
	else
	{
		nc->lname = (char*)malloc(strlen(temp) + 1);		// + 1 is for '\0'
		if (nc->lname != NULL)
			strcpy(nc->lname, temp);
		else
			printf("Malloc() failed");
	}
}

void makeinfo(struct namect* nc)
{
	nc->letters = strlen(nc->fname) + strlen(nc->lname);
}

void showinfo(const struct namect* nc)
{
	char* format = "%s %s. your name containts \
%d letters";
	printf(format, nc->fname, nc->lname, nc->letters);
}

void cleanup(struct namect* nc)
{
	free(nc->fname);
	free(nc->lname);
}

char* s_gets(char* st, int n)
{
	char* ret_val;
	char* find;

	ret_val = fgets(st, n, stdin);		// vs. scanf()
	if (ret_val)
	{
		find = strchr(st, '\n');		// look for newline
		if (find)						// if the address is not NULL
			*find = '\0';				// place a null character there
		else
			while (getchar() != '\n')
				continue;				// dispose of rest of line
	}

	return ret_val;
}