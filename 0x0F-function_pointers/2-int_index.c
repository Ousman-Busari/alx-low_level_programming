#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: the array to search
 * @size: number of elements in the array
 * @cmp: the comparison fucntion
 *
 * Return: index of the integer
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
