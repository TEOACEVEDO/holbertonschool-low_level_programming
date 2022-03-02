#include "main.h"

/**
 *_print_rev_recursion -  prints a string, in reverse.
 * @s: pointer to string
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
else
	_putchar('\n');
}
