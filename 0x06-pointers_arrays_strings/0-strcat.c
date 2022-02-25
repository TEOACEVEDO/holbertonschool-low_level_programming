#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int v;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	v = 0;
	while (src[v] != '\0')
	{
		dest[a] = src[v];
		a++;
		v++;
	}

	dest[a] = '\0';
	return (dest);
}
