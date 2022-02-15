#include "main.h"
/**
 *_islower - Es lA que estamos utilizando
 *@a: la variable que corre la funcion
 *
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
else
{
		return (0);
}
_putchar('\n');
}
