#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the pointer to the struct named head
 * @str: pointer to the string str
 *
 * Return: pointer to the struct list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp;
	list_t *tmpp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->str = _strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		tmpp = *head;
		while (tmpp->next != NULL)
			tmpp = tmpp->next;
		tmpp->next = tmp;
	}
	return (tmp);
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: parameter defined in main
 *
 * Return: length of string
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string of chars
 *
 * Return: address of the newly allocated memory
 */

char *_strdup(const char *str)
{
	unsigned int len;
	unsigned int i, j;
	char *cop;
	const char *tmp = str;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (*str++)
		i++;
	len = i;
	str = tmp;

	cop = malloc(len * sizeof(char) + 1);
	if (cop == NULL)
		return (NULL);

	j = 0;
	while (j < len)
	{
		cop[j] = str[j];
		j++;
	}
	cop[j] = '\0';
	return (cop);
}
