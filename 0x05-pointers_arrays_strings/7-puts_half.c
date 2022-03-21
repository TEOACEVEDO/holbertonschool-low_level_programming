#include "main.h"

/**
* puts_half - nos muestre caracteres que sean numeros enteros haciendo % 2
* @str: Input string
**/
void puts_half(char *str)
{
int i, n, len;

len = 0;

for (i = 0; str[i] != '\0'; i++)
len++;

n = (len / 2);

if ((len % 2) == 1)
n = ((len + 1) / 2);

for (i = n; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');
}
