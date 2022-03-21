#include "main.h"
/**
 *_memcpy - a function that copies memory area.
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: changed array with new value for n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = n;
	int y = 0;
for (; y < t; y++)
{
dest[y] = src[y];

}
return (dest);
}
