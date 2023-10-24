#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data (n) of a linked list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n), 0 - if the list is empty
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		add += ptr->n;
		ptr = ptr->next;
	}
	return (add);
}
