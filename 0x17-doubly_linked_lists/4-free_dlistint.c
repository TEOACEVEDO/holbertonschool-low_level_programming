#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head: pointer to a pointer to the head of a list.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	while (head)
	{
		free_list = head;
		head = free_list->next;
		free(free_list);
	}
}
