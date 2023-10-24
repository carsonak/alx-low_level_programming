#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given index of a linked list
 * @head: address of the pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 - if function succeeds, -1 if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *ptr = *head;
	unsigned int node;

	if (ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}

	tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);
	return (1);
}
