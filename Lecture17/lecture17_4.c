#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TSIZE 45

struct movie {
	char title[TSIZE];
	float rating;
	struct movie* next;
};

typedef struct movie* p_movie;

void print_all(p_movie head)
{
	printf("------------------------\n");
	printf("Head address = %zd\n", (size_t)head);
	p_movie search = head;
	while (search != NULL)
	{
		printf("%zd \"%s\" %f %zd\n", (size_t)search, search->title, 
			search->rating, search->next);
		search = search->next;
	}
}


int main()
{
	p_movie head = NULL;

	/* First Node*/
	p_movie new_node = malloc(sizeof(struct movie));
	if (new_node == NULL)
	{
		printf("ERROR: malloc failed.\n");
		exit(1);
	}
	strcpy(new_node->title, "Avatar");
	new_node->rating = 9.5f;
	new_node->next = NULL;

	if (head == NULL)
		head = new_node;	// First node
	// else {}				// insert or add back

	//print_all(head);

	/* Second Node*/
	new_node = malloc(sizeof(struct movie));
	if (new_node == NULL)
	{
		printf("ERROR: malloc failed.\n");
		exit(1);
	}
	strcpy(new_node->title, "Aladdin");
	new_node->rating = 8.0f;
	new_node->next = NULL;

	/* Add front */
	p_movie temp = head;
	head = new_node;
	new_node->next = temp;

	print_all(head);

	/* Third Node*/
	new_node = malloc(sizeof(struct movie));
	if (new_node == NULL)
	{
		printf("ERROR: malloc failed.\n");
		exit(1);
	}
	strcpy(new_node->title, "Wonder woman");
	new_node->rating = 8.5f;
	new_node->next = NULL;

	/* Add back */
	// 1. find last node
	p_movie search = head;
	while (search->next != NULL)
	{
		search = search->next;
	}
	// 2. Link
	search->next = new_node;

	print_all(head);

	/* Find and Delete an item */
	search = head;
	p_movie prev = NULL;

	int count = 0;
	while (search != NULL)
	{
		if (strcmp(search->title, "Aladdin") == 0) break;

		prev = search;
		search = search->next;
		count++;
	}

	if (search == NULL)
	{
		printf("Wrong title\n");
		return;
	}

	if (prev == NULL)
		head = search->next;
	else
		prev->next = search->next;
	free(search);
	print_all(head);

	return 0;
}

