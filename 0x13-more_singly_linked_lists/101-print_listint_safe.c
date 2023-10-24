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

	while (ptr != NULL && (ptr->next > ptr))
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		node++;
		ptr = ptr->next;
	}
	return (node);
}
