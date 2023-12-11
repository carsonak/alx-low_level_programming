#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of a doubly linked list
 * @head: address of the head of the list
 * @n: the number to store
 *
 * Return: pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL;

	if (head)
		temp = malloc(sizeof(dlistint_t));

	if (temp)
	{
		temp->n = n;
		temp->next = *head;
		temp->prev = NULL;
		if (*head)
			(*head)->prev = temp;

		*head = temp;
	}

	return (temp);
}
