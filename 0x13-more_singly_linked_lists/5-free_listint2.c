#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: pointer to list head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head && head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	*head = NULL;
}
