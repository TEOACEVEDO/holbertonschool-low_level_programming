#include "main.h"

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n);
		_putchar(',');
		 _putchar(' ');
		n++;
	}

	while (n > 98)
	{
	        _putchar(n);
                _putchar(',');
		 _putchar(' ');

		n--;
	}

	if (n == 98)
		_putchar(n);
	 _putchar(',');
	  _putchar(' ');

	_putchar('\n');
}
