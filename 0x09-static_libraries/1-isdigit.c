#include "main.h"
/**
* _isdigit - esto mira si es un digito
* @c: variable de la funcion
* Return: 1 si es un digito y 0 si no
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}

	return (0);
}
