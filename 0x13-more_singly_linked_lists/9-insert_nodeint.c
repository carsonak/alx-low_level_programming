#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node will be added
 * @n: value for the new node to be added
 *
 * Return: pointer to the new node, NULL - if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);

		ptr = ptr->next;
	}

	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
