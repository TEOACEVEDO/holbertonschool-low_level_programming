#include "holberton.h"
/**
 *_strpbrk - searching a string for any of a set of bytes
 * @s: the string
 * @accept: set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
        int t;

        while (*s)
        {
                for (t = 0; accept[t]; t++)
                {
                if (*s == accept[t])
                return (s);
                }
        s++;
        }

return ('\0');
}
