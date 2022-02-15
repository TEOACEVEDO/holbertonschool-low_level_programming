#include "main.h"
/**
 *print_last_digit - print last digit of integer
 *@t: integer argument
 *Return: last digit of number
 */
int print_last_digit(int t)
{
	int j = t % 10;
	if (t < 0)
		j = (j *= -1);

	_putchar(j + '0');

	return (j);
}
