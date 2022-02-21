#include "main.h"

/**
* puts2 - nos muestre caracteres que sean numeros enteros haciendo % 2
* @str: Input string
**/
void puts2(char *str)
{
int len = 0;
int l = 0;
char *y = str;
int z;

while (*y != '\0')
{
y++;
len++;
}
l = len - 1;
for (z = 0 ; z <= l ; z++)
{
if (z % 2 == 0)
{
_putchar(str[z]);
}
}
_putchar('\n');
}
