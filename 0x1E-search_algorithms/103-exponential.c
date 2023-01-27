#include "search_algos.h"

int binary_search_range(int *array, size_t start, size_t end, int value);

/**
 * binary_search_range - searches for a value in, within a range, a sorted
 *                       array of integers using the binary search algorithm
 * @array: pointr to the first elements of the array to search
 * @start: index where the search should start from
 * @end: index where the search should end
 * @value: the value to search for
 *
 * Return: first index where the value is located
 *         -1 if value is absent or array is null
 */
int binary_search_range(int *array, size_t start, size_t end, int value)
{
	size_t i, i_start = start, i_end = end, i_mid;

	if (!array)
		return (-1);

	while (i_start <= i_end)
	{
		printf("Searching in array: ");
		for (i = i_start; i < i_end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i_mid = (i_end + i_start) /  2;
		if (array[i_mid] == value)
			return (i_mid);
		if (array[i_mid] > value)
			i_end = i_mid - 1;
		else
			i_start = i_mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in an sorted array of integers
 *                      using the exponential search algorithm
 * @array: pointer to the first elements of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located, or
 *         -1 if value is absent or array is null
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t low_bound, bound;

	bound = 1;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low_bound = bound / 2;
	if (bound >= size)
		bound = size - 1;

	printf("Value found betweeen indexes [%ld] and [%ld]\n",
	       low_bound, bound);

	return (binary_search_range(array, low_bound, bound, value));
}
