#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: 2D array
 * @size: size x size of the square matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i;
	int o = 0;
	int t = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		o += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		t += a[i];
	}

	printf("%d, %d\n", o, t);
}
