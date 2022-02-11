#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Esto me sirve para que cuando haga una combinacion de 0 a 9 me vaya poniendo una , y un espacio cada que imprima un numero
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
if (n != '9')
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
