#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data in a list
 * @head: head of the list
 *
 * Return: Sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;

	for (i = 0; head; head = head->next)
		i += head->n;

	return (i);
}
