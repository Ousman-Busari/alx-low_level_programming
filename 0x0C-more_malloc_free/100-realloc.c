#include "main.h"
#include <stdlib.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: the intial memory block
 * @old_size: old size of the of the allocated memory
 * @new_size: new size of the allocated memory
 *
 * Return: pointer to the new memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *_ptr;
	unsigned int i = 0;

	_ptr = ptr;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	for (; i < old_size; i++)
	{
		new_ptr[i] = _ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
