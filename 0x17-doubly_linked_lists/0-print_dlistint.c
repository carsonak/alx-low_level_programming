#include "lists.h"

/**
 * print_dlistint - prints elements of a list
 * @h: head of the list
 *
 * Return: number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (i = 0; h; i++, h = h->next)
		printf("%d\n", h->n);

	return (i);
}
