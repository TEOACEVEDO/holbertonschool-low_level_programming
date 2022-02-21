#include "main.h"
#include <stdio.h>
/**
* _strlen - prototipo para la cadena 
* @s: es la variable de entrada
* Return: 0
*/
int _strlen(char *s)
{
int longitud = 0;

while (*s != '\0')
{
longitud++;
s++;
    }

return (longitud);
}
