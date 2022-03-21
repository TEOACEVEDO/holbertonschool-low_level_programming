#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int longitud = 0;
int r;

while (*s != '\0')
{
longitud++;
s++;
}
s--;
for (r = longitud; r > 0; r--)
{
_putchar(*s);
s--;
}

_putchar('\n');
}
