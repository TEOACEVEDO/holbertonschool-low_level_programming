#include "main.h"
/**
 *print_sign - function
 *@n: variable of the function
 *Return: Todo depende de la funcion
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}

else if (n < 0)
{
	_putchar('-');
	return (-1);
}
else
{
_putchar('0');
return (0);
}
_putchar('\n');
}
