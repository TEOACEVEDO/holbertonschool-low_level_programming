#include "search_algos.h"

/**
 * linear_search - function that is used for extract a information
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		idx++;
	}
	return (-1);
}
