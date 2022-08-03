#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_interator - executes a function given as a parameter on each
 * element of an array
 * @array: array of data
 * @size: size of the array
 * @action: fucntion to carry out on each
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
