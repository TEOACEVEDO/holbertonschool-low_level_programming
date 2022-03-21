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

char ch, n;
for (n = '0' ; n <= '9' ; n++)
putchar(n);
for (ch = 'a' ; ch <= 'f' ; ch++)
putchar(ch);
putchar('\n');

return (0);
}
