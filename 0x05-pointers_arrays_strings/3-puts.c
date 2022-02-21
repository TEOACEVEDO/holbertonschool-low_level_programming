#include "main.h"
#include <stdio.h>
/**
* _puts - prototipo para la cadena
* @str: es la variable de entrada
*/
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
