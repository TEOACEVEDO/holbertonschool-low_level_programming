#include "main.h"
#include <stdio.h>
/**
* print_rev - prototipo para la cadena
* @s: es la variable de entrada
*/
void print_rev(char *s)

{
int r;
int longitud = 0;

while (*s != '\0')
{
longitud++;
s++;
}
for (r = longitud; r > 0; r--)
_putchar(r--);
_putchar('\n');
}
