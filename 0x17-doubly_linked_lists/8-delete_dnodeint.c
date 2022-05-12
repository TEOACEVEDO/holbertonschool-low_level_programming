#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index.
 * of a dlistint_t linked list.
 * @head: pointer to a pointer to the head of a list
 * @index: is the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prim = *head, *list;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			prim->next->prev = NULL;
			*head = prim->next;
		}
		else
			*head = NULL;
		free(prim);
		return (1);
	}
	else
	{
		while (i < index - 1 && prim != NULL)
		{
			prim = prim->next;
			i++;
		}
		if (prim == NULL || prim->next == NULL)
			return (-1);
		if (prim->next->next != NULL)
			prim->next->next->prev = prim;
		list = prim->next->next;
		free(prim->next);
		prim->next = list;
	}
	return (1);
}
