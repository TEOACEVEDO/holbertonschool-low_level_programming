#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int wtf = 0;

	while (str[wtf])
	{
		while (!(str[wtf] >= 'a' && str[wtf] <= 'z'))
			wtf++;

		if (str[wtf - 1] == ' ' ||
		    str[wtf - 1] == '\t' ||
		    str[wtf - 1] == '\n' ||
		    str[wtf - 1] == ',' ||
		    str[wtf - 1] == ';' ||
		    str[wtf - 1] == '.' ||
		    str[wtf - 1] == '!' ||
		    str[wtf - 1] == '?' ||
		    str[wtf - 1] == '"' ||
		    str[wtf - 1] == '(' ||
		    str[wtf - 1] == ')' ||
		    str[wtf - 1] == '{' ||
		    str[wtf - 1] == '}' ||
		    wtf == 0)
			str[wtf] -= 32;

		wtf++;
	}

	return (str);
}
