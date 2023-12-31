#include "lists.h"

/**
 * free_list - frees space allocated to a linked list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
