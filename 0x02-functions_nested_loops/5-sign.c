#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_sign(int n);
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
-putchar('0');
return (0);
}
_putchar('\n') 
}

