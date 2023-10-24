#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the head of the linked list
 *
 * Return: head node's data (n), 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int n;

	if (ptr == NULL)
		return (0);

	*head = ptr->next;
	n = ptr->n;
	free(ptr);

	return (n);
}
