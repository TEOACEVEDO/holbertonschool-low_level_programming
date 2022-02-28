#include "main.h"
/**
 *_memset - fill a block of memory with a specific value
 *@n: number of bytes to be changed
 *@s: starting address of memory to be filled
 *@b: the desired value
 *Return: cambia el array con un nuevo valor por n Bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
