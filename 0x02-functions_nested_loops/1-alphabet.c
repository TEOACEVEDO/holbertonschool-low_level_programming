#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char t;
	t = 'a';

	while (t <= 'z')
	{
		_putchar(t);
		t++;
	}
	_putchar('\n');

}
