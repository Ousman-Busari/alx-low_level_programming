#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 *                 linear search algorithm
 * @array: pointer to the first elements of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located
 *         -1 if value is absent or array is null
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
