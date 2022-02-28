#include "main.h"
/**
 *_strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: a pointer to a character aka the character found
 */
char *_strchr(char *s, char c)
{
	int t;

	for (t = 0; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
		return (&s[t]);
	}
	return (0);
}
