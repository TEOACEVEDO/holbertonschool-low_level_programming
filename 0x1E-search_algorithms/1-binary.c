#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted array
 * @array:  is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: is the value to search for
 * Return: index
 */

int binary_search(int *array, size_t size, int value)
{
	int cent;
	size_t sup, inf;
	size_t i;

	inf = 0;
	sup = size - 1;

	if (array == NULL)
		return (-1);

	while (inf <= sup)
	{
		printf("Searching in array: ");
		i = inf;
		while (i <= sup)
		{
			if (i < sup)
				printf("%ld, ", i);
			else
				printf("%ld", i);
			i++;
		}
		printf("\n");
		cent = ((sup - inf) / 2) + inf;
		if (value == array[cent])
			return (cent);
		if (value < array[cent])
			sup = cent - 1;
		else
			inf = cent + 1;
	}
	return (-1);
}
