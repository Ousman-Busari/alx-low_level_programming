#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an sorted array of integers
 *                         using the interpolation search algorithm
 * @array: pointer to the first elements of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located, or
 *         -1 if value is absent or array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low = 0, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));
	for (i = pos; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value checked array[%ld] is out of range\n", i);
	return (-1);
}
