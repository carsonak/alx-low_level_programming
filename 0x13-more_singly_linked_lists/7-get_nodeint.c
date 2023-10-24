#include "lists.h"
/**
 * get_nodeint_at_index - finds a given node using index in a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to find
 *
 * Return: pointer to the desired node, NULL - if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;
	listint_t *ptr = head;

	for (n = 0; (n < index) && (ptr->next); n++)
		ptr = ptr->next;

	if (n < index)
		return (NULL);

	return (ptr);
}
