#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the struct list_t
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *lst;

	while (head != NULL)
	{
		lst = head;
		head = head->next;
		free(lst->str);
		free(lst);
	}
}
