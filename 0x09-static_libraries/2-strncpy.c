#include "main.h"

/**
 * _strncpy - copy from src a certein n of characters to dest 
 * @dest: where to copy to;
 * @src: string to copy from
 * @n: number od characrers to copy from
 * Return: a pointer character
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	while (*src && i < n)
	{
		*dest++ = *(src + i);
		i++;
	}
	return (result);
}
