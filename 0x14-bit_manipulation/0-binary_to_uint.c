#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: char
 *
 * Return:  the converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL || b == 0)
		return (0);

	while (b[i] != '\0')
	{ /*Found another digit.*/
		if (b[i] != '1' && b[i] != '0')
			return (0);
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
