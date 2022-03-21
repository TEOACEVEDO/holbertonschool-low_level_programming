#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int a, v;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (v = 0; v < 10; v++)
		{
			if (n[a] == s1[v])
			{
				n[a] = s2[v];
			}
		}
	}
	return (n);
}
