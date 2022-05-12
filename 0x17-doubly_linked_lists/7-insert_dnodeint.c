#include "lists.h"

/**
 * *insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: pointer to a pointer to the head of a list
 * @idx: the index of the list where the new node should be added.
 * @n: integer to be add to the list.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *next, *sec, *actual = *h;
	unsigned int i = 0;

	next = malloc(sizeof(dlistint_t));
	if (!next)
		return (NULL);
	next->n = n;
	next->next = NULL;
	next->prev = NULL;
	if (*h == NULL)
	{
		*h = next;
		return (next);
	}
	if (idx == 0)
	{
		(*h)->prev = next, next->next = *h, *h = next;
		return (next);
	}
	while (actual != NULL)
	{
		if (i == idx)
		{
			sec = actual->prev;
			actual->prev = next;
			next->prev = sec;
			next->next = actual;
			sec->next = next;
			return (next);
		}
		if (i + 1 == idx && actual->next == NULL)
		{
			actual->next = next;
			next->prev = actual;
			return (next);
		}
		actual = actual->next;
		i++;
	}
	return (NULL);
}

