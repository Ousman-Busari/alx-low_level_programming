#include "search_algos.h"

int advanced_binary_recursive(int *array, size_t left, size_t right,
			      int value);

/**
 * advanced_binary_recursion - searches for a value in a sorted array of
 *                             integers us recursion
 * @array: pointer to the first element of the array
 * @left: index of the first elements within a range of an array
 * @right: index of the last element within a range of an array
 * @value: the value to be searched for
 *
 * Return: index of the first appearance of the value
 */
int advanced_binary_recursion(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = (left + right) / 2;
	if (array[i] == value && array[i - 1] != value)
		return (i);

	if (array[i] >= value)
		return (advanced_binary_recursion(array, left, i, value));
	return (advanced_binary_recursion(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *                   using binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: index of the first appearance of the value, or
 *         -1 if array is NULL or value doesn't exit
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);

	return (advanced_binary_recursion(array, 0, size - 1, value));
}
