#include "search_algos.h"

/**
 * linear_search - function that is used for extract a information
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	while (idx < size)
	{
		printf("Value checked array[%li] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
		{
			return (idx);
		}
		idx++;
	}
	return (-1);
}
