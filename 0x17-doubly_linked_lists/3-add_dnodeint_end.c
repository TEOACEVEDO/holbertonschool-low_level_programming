#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to a pointer to the head of a list
 * @n: const integer to be added to the list_t list
 * Return: a new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *aux = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = new_node;
	new_node->prev = aux;

	return (new_node);
}
