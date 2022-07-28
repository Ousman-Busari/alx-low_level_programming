#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - assigns memory using malloc
 *@b: the size bytes to allocate
 *
 * Return: 0 if success, 98 otherwise
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
