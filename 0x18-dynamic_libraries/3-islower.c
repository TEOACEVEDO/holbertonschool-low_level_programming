#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - detect all the charecters in lowercase
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
int ch, a;
a = 0;
for (ch  = 'a'; ch <= 'z'; ch++)
{
if (c == ch)
{
a = 1;
}
}
return (a);
}
