#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - function to get the lenght of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node - add nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *cont;
	list_t *lst;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	lst = *head;
	cont = malloc((len + 1) * sizeof(char));
	if (cont == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		cont[i] = str[i];
	lst = malloc(sizeof(list_t));
	if (lst == NULL)
	{
		free(cont);
		return (NULL);
	}
	lst->str = cont;
	lst->len = len;
	lst->next = *head;
	*head = lst;
	return (lst);
}
