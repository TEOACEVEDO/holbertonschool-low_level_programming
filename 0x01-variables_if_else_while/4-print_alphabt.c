#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char ch, q, e;
q = 'q';
e = 'e';
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if ((ch != q) &&(ch != e))
putchar(ch);
}
putchar('\n');

return (0);
}
