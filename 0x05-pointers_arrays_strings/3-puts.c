#include "main.h"
#include <stdio.h>
/**
* _puts - prototipo para la cadena
* @str: es la variable de entrada
* Return: 0
*/
void _puts(char *str)
{
int longitud = 0;

while (*str != '\0')
{
longitud++;
str++;
}
puts (*str);
puts ('\n');
}
