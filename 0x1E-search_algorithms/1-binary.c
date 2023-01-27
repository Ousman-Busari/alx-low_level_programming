#include "search_algos.h"

void print_array_range(int *array, size_t start, size_t end);

/**
 * print_array_range - prints the elements of an array within a range
 * @array: pointer to the first element of the array
 * @start: the index where the printing should start
 * @end: the index where the printing should end
 *
 * Return: Nothing
 */
void print_array_range(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 *                 binary search algorithm
 * @array: pointr to the first elements of the array to search
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located
 *         -1 if value is absent or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i_start = 0, i_end = size - 1, i_mid;

	if (!array)
		return (-1);

	while (i_start <= i_end && i_end < size)
	{
		print_array_range(array, i_start, i_end);

		i_mid = (i_end + i_start) /  2;
		if (array[i_mid] == value)
			return (i_mid);
		if (array[i_mid] > value)
			i_end = i_mid - 1;
		else if (array[i_mid] < value)
			i_start = i_mid + 1;
	}
	return (-1);
}
