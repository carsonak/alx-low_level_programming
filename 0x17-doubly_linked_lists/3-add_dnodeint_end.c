#include "lists.h"

/**
 * add_dnodeint_end - Inserts a node at the end of a doubly list
 * @head: address of the head of the list
 * @n: the number to be inserted
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *walk = NULL, *temp = NULL;

	if (head)
	{
		walk = *head;
		while (walk && walk->next)
			walk = walk->next;

		temp = malloc(sizeof(dlistint_t));
		if (temp)
		{
			temp->n = n;
			temp->next = NULL;
			temp->prev = walk;
			if (walk)
				walk->next = temp;
			else
				*head = temp;
		}
	}

	return (temp);
}
