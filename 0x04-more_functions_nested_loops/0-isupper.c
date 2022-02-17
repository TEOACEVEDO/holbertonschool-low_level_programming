#include "main.h"
#include <stdio.h>

/**
* _isupper - function that check in uppercase variable entry
* @c: es la variable de entrada
* Return: 1 si es Mayus
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
