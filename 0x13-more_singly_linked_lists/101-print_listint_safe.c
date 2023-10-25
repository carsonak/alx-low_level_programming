#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;
	size_t node = 0;
	int diff = 0;

	diff = head - head->next;

	if (diff < 0)
	{
		while ((diff < 0) && ptr)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			node++;
			diff = ptr - ptr->next;
			ptr = ptr->next;
		}
	}
	else if (diff > 0)
	{
		while ((diff > 0) && ptr)
		{
			printf("[%p] %d\n", (void *)ptr, ptr->n);
			node++;
			diff = ptr - ptr->next;
			ptr = ptr->next;
		}
	}
	else
		printf("[%p] %d\n", (void *)ptr, ptr->n);

	printf("-> [%p] %d\n", (void *)ptr, ptr->n);

	return (node);
}
