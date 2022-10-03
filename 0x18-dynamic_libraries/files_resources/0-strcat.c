#include "main.h"

/**
 * _strcat - concateneates two strings
 * @dest: the first string
 * @src: the swecond string
 *
 * Return: char pointer of the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (result);
}
