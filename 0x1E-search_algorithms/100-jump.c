#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an sorted array of integers using the
 *               jump search algorithm
 * @array: pointer to the first elements of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located, or
 *         -1 if value is absent or array is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, step, i_max;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = 0; i < size; i += step)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	i_max = i;

	printf("Value found between indexes [%ld] and [%ld]\n",
	       i_max - step, i_max);

	for (i = i_max - step; i <= i_max && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
