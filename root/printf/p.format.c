#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * exponent - x to the power of y
 * @x: base number
 * @y: exponent
 * Description: calcuates x^y
 * Return: x^y
 **/
int exponent(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * exponent(x, y - 1));
}

/**
 * p_int - print an int using only _write
 * @number: int to print
 * Return: chars printed
 **/
int p_int(int number)
{
	int size, digit, result;
	long counter, sign;

	sign = 1;
	digit = 0;
	size = 1;
	counter = number;
	result = 0;

	if (number < 0)
	{
		_write('-');
		sign = -1;
		counter *= sign;
		result++;
	}

	for (; counter >= 10; size++)
	{
		counter = counter / 10;
	}

	counter = sign * (long)number;

	while (size >= 2)
	{
		digit = (counter / exponent(10, size - 1));
		_write(digit + '0');
		counter = counter % exponent(10, size - 1);
		size--;
		result++;
	}
	_write(counter % 10 + '0');
	result++;
	return (result);
}

/**
 * p_intu - print an int using only _write
 * @num: int to print
 * Return: chars printed
 **/
int p_intu(unsigned int num)
{
	if (num <= 9)
		return (_write(num + '0'));
	else
		return (p_intu(num / 10) + _write(num % 10 + '0'));
}

/**
 * p_bin - convert int to binary and print
 * @num: number to convert
 * Return: number of chars printed
 **/
int p_bin(unsigned int num)
{
	if (num < 2)
		return (_write(num + '0'));
	else
		return (p_bin(num / 2) + _write(num % 2 + '0'));
}
