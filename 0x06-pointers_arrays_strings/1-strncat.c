#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int v;

	a = 0;
	while (dest[a] != '\0')
	{
		i++;
	}
	v = 0;
	while (v < n && src[v] != '\0')
	{
	dest[a] = src[v];
	a++;
	v++;
	}
	dest[a] = '\0';
	return (dest);
}
