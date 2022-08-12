#include "search_algos.h"
/**
 * searching - cut the range of search ad return number find
 * @array: is a pointer to the first element of the array to search in
 * @aux: max index to search
 * @value: is the value to search for
 * @i: min index to search
 *
 * Return: find number or -1 if not exist
 */

int searching(int *array, size_t aux, int value, size_t i)
{
	size_t save = 0;
	size_t save2 = i;

	save = aux - i;
	save /= 2;

	if (array[save + save2] != value)
		save++;

	printf("Searching in array: ");
	for (; i < aux && i != aux; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);

	if (array[save + save2] == value)
		return (save + save2);

	if (array[save + save2] < value && save + save2 <= aux)
		return (searching(array, aux, value, save + save2));

	return (-1);
}

/**
 * exponential_search -  a function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: index of value, -1 on flailure
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t aux = 0;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 1; i <= size; i *= 2, aux = i)
	{

		if (i >= size)
			aux = size - 1;

		if (array[aux] >= value || array[aux] == array[size - 1])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", i / 2, aux);
			return (searching(array, aux, value, i / 2));
		}

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}
