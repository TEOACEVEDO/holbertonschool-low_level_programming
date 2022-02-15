#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int al)
{

if (al >= 'a' && al <= 'z')
{
return (1);
}
else if (al >= 'A' && al <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
