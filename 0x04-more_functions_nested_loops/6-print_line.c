#include "main.h"
/**
* print_line - Escribe una lina recta
* @n: variable cantidad de lineas rectas
*/
void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
