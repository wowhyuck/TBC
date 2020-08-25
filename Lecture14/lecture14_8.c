#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define NLEN 30

struct name_count {
	char first[NLEN];
	char last[NLEN];
	int num;
};

/* 巩力 1 */
//void receive_input(struct name_count*);
//void count_characters(struct name_count*);
//void show_result(const struct name_count*);
//char* s_gets(char* st, int n);

/* 巩力 2 */
struct name_count receive_input();
struct name_count count_characters(struct name_count);
void show_result(const struct name_count);
char* s_gets(char* st, int n);

int main()
{
	struct name_count user_name;

	/* 巩力 1 */
	//receive_input(&user_name);
	//count_characters(&user_name);
	//show_result(&user_name);

	/* 巩力 2 */
	user_name = receive_input();
	user_name = count_characters(user_name);
	show_result(user_name);

	return 0;
}

/* 巩力 1 */
//void receive_input(struct name_count* name_ct)
//{
//	//printf("Input your first name:\n>>");
//	//s_gets(name_ct->first, NLEN);
//	//printf("Input your last name:\n>>");
//	//s_gets(name_ct->last, NLEN);
//
//	int flag;
//	printf("Input your first name:\n>>");
//
//	flag = scanf("%[^\n]%*c", name_ct->first);		// ^ : cap operator
//	if (flag != 1)
//		printf("Wrong input");
//
//	printf("Input your last name:\n>>");
//	flag = scanf("%[^\n]%*c", name_ct->last);
//	if (flag != 1)
//		printf("Wrong input");
//}
//
//void count_characters(struct name_count* name_ct)
//{
//	name_ct->num = strlen(name_ct->first)+strlen(name_ct->last);
//
//}
//void show_result(const struct name_count* name_ct)
//{
//	printf("Hi, %s %s. Your name has %d characters", 
//		name_ct->first, name_ct->last, name_ct->num);
//}

/* 巩力 2 */
struct name_count receive_input()
{
	struct name_count n_ct;
	printf("Input your first name:\n>>");
	s_gets(n_ct.first, NLEN);
	printf("Input your last name:\n>>");
	s_gets(n_ct.last, NLEN);

	return n_ct;
}

struct name_count count_characters(struct name_count n_ct)
{
	n_ct.num = (int)strlen(n_ct.first) + (int)strlen(n_ct.last);

	return n_ct;
}

void show_result(const struct name_count n_ct)
{
		printf("Hi, %s %s. Your name has %d characters", 
			n_ct.first, n_ct.last, n_ct.num);
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