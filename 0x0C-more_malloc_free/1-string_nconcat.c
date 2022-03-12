#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenar 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: es el limite de los bytes de s2
 * return: la concatenacion
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int s;
unsigned int t;
char *strDup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = t = 0;
	while (s1[s] != '\0')
		s++;

	while (s2[t] != '\0')
		t++;
	strDup = malloc(sizeof(char) * (s + t + 1));
	if (strDup == NULL)
	{
		free(strDup);
		return (NULL);
	}
	s = t = 0;
	while (s1[s] != '\0')
	{
		strDup[s] = s1[s];
		s++;
	}
	while (s2[t] != '\0' && t < n)
	{
		strDup[s] = s2[t];
		s++, t++;
	}
	strDup[s] = '\0';
	return (strDup);
}
