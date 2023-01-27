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
	size_t low, high = size - 1, pos;

	if (!array || size == 0)
		return (-1);

	for (low = 0;;)
	{
		pos = low + (((double)(high - low)/ (array[high] - array[low]))
			     * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n",
			       pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n",
			       pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos -  1;
	}
	return (-1);
}
