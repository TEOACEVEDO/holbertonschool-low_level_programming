#include "lists.h"

/**
 * *get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer to a pointer to the head of a list
 * @index: s the index of the node, starting from 0.
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		i++;
		head = head->next;
	}
	return (NULL);
}
