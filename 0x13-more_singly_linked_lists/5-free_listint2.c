#include "lists.h"
/**
 * free_listint2 - free a linked list
 * @head: pointer to list head
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head)
	{
		while (*head)
		{
			ptr = *head;
			*head = ptr->next;
			free(ptr);
		}
		*head = NULL;
	}
}
