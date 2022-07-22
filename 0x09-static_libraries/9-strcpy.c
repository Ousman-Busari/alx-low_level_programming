#include "main.h"

/**
 * _strcpy - copy strings fromsource to destination
 * @dest: the destination string
 * @src: the source string
 *
 * Return: Always a pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	while (*src)
		*dest++ = *src++;
	while (*dest && !*src)
		*dest++ = '\0';
	return (result);
}
