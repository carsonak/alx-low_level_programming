#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer the head of the list
 * @n: content to be added
 *
 * Return: the new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_nde;

	nw_nde = malloc(sizeof(listint_t));
	if (nw_nde != NULL)
	{
		nw_nde->n = n;
		nw_nde->next = *head;
	}
	else
		return (NULL);

	*head = nw_nde;
	return (*head);
}
