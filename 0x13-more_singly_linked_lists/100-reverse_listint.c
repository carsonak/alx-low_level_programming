#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *tail;

	current = *head;
	tail = NULL;
	while (*head != NULL)
	{
		current = *head;
		*head = current->next;
		current->next = tail;
		tail = current;
	}

	*head = current;
	return (*head);
}
