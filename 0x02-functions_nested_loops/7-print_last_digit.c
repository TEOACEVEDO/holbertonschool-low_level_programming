#include "main.h"
/**
 *print_last_digit - print last digit of integer
 *@t: integer argument
 *Return: last digit of number
 */
int print_last_digit(int t);
{
	if (t < 0)
		t *= -1;

	_putchar('0' + (t % 10));

	return (t % 10);
}
