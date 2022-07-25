#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of character
 * @size: the size of tha array
 * @c: the character
 *
 * Return: pointer to the resulting array
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *result;

	result = malloc(sizeof(char) * size);
	for (i = 0; i < size; ++i)
	{
		result[i] = c;
	}
	return (result);
}
