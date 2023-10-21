#include "lists.h"

/**
 * list_len - counts number of elements in list
 * @h: pointer to first node
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 1;
	const list_t *ptr = h;

	if (h == NULL)
		return (0);

	while (ptr->next)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
