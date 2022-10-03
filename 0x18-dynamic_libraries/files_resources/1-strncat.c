#include "main.h"

/**
 * _strncat - concat two strings
 * @dest: to-be added string
 * @src: added string
 * @n: number of charcaters to be added
 * Return: the resulting character
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*dest)
		dest++;
	while (*src && i < n)
	{
		*dest++ = *(src + i);
		i++;
	}
	*dest = '\0';
	return (result);
}
