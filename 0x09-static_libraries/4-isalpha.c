#include "main.h"
/**
 *_isalpha - function
 *@al: variable of the function
 *Return:si es mayus retorna 1 si es minus retorna 0
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
