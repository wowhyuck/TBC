#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "LinkedQueue.h"

Item get_item(const char* name)
{
	Item new_item;
	strcpy(new_item.name, name);
	return new_item;
}

void print_item(Item item)
{
	printf("%s ", item.name);
}

void print_queue(Queue* pq)
{
	printf("Front: %s at %p, Rear: %s at %p, Size: %d\n",
		pq->front == NULL ? "NULL" : pq->front->item.name, pq->front,
		pq->rear == NULL ? "NULL" : pq->rear->item.name, pq->rear, pq->n_items);

	printf("Queue: ");
	if (QueueIsEmpty(pq))
		printf("Empty");
	else
		TraverseQueue(pq, &print_item);
	printf("\n\n");
}


int main()
{
	Queue queue;
	Item temp;

	InitializeQueue(&queue);

	EnQueue(get_item("Jack"), &queue);
	print_queue(&queue);

	EnQueue(get_item("Henry"), &queue);
	print_queue(&queue);

	EnQueue(get_item("Stan"), &queue);
	print_queue(&queue);

	EnQueue(get_item("Butters"), &queue);
	print_queue(&queue);

	if (DeQueue(&temp, &queue))
		printf("Item from queue: %s\n", temp.name);
	print_queue(&queue);

	if (DeQueue(&temp, &queue))
		printf("Item from queue: %s\n", temp.name);
	print_queue(&queue);

	if (DeQueue(&temp, &queue))
		printf("Item from queue: %s\n", temp.name);
	print_queue(&queue);

	if (DeQueue(&temp, &queue))
		printf("Item from queue: %s\n", temp.name);
	print_queue(&queue);

	printf("----- Circulation test -----");

	InitializeQueue(&queue);

	for (int i = 0; i < 10; i++)
	{
		EnQueue(get_item("Hello"), &queue);
		print_queue(&queue);

		if (DeQueue(&temp, &queue))
			printf("Item from queue: %s\n", temp.name);
		print_queue(&queue);
	}

	return 0;
}