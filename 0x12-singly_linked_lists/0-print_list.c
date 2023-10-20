#include "lists.h"

/**
 * print_list - prints all elemments in linked list
 * @h: pointer to first node
 *
 * Return: number of elements in linked list
 */
size_t print_list(const list_t *h)
{
	size_t count = 1;
	const list_t *ptr = h;

	while (ptr->next)
	{
		if (ptr->str)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");

		count++;
		ptr = ptr->next;
	}

	if (ptr->str)
		printf("[%d] %s\n", ptr->len, ptr->str);
	else
		printf("[0] (nil)\n");

	return (count);
}
