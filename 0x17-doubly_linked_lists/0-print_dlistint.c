#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: elements of the list
 *
 * Return: number of the element
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
