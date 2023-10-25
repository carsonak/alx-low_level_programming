#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr = head;
	size_t node = 0, i;
	int *adres, n = 0;

	while (ptr)
	{
		n++;
		adres = malloc(sizeof(*adres) * n);
		adres[n] = ptr;
		ptr = ptr->next;

		for (i = 0; i < n; i++)
			if (ptr == adres[i])
				return (adres[i]);
	}

	printf("-> [%p] %d\n", (void *)ptr, ptr->n);

	return (node);
}

/**
 * check_loop - checks for a loop in a linked list
 * @head: pointer to the head of the list
 *
 * Return: Address of the start of the loop, 0 if none
 */
int check_loop(const listint_t *head)
{
	const listint_t *ptr = head;
	int i, *adres, *ad_cpy, loop_at = 0, n = 0;

	while (ptr)
	{
		n++;
		adres = malloc(sizeof(*adres) * n);
		adres[n] = ptr;
		ad_cpy = adres;
		ptr = ptr->next;

		for (i = 0; i < n; i++)
		{
			if (ptr == adres)
			{
				loop_at = adres;
				break;
			}
		}
		if (loop_at > 0)
			break;
	}

	return (loop_at);
}
