#include "main.h"
#include <stdio.h>
/**
* print_rev - prototipo para la cadena
* @s: es la variable de entrada
*/
void print_rev(char *s)
{

while (*s != '\0')
{
_putchar(*s--);
}
_putchar('\n');
}
