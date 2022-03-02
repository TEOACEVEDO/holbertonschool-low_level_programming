#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: pointer to string
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s-1);
	_putchar(*s);
	}
	
}
