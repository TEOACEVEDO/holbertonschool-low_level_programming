#include "main.h"
/**
 *_islower - Es lA que estamos utilizando
 *@c: la variable que corre la funcion
 *Return: 0 para que nos retorne 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
