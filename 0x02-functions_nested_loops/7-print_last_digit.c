#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int t);
{
	if (t < 0)
		t *= -1;

	_putchar('0' + (t % 10));

	return (t % 10);
}
