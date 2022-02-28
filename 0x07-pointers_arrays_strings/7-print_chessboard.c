#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int t;
	int s;
for (t = 0; t < 8; t++)
{
for (s = 0; s < 8; s++)
	_putchar(a[t][s]);
_putchar('\n');
	}
}
