#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *memory, which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *result, *initial;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	initial = str;

	while (*str)
		len++, str++;

	str = initial;

/*	result = malloc(sizeof(char) * (len + 1));*/
       	result = malloc(sizeof(str) * 1);
	if (result == NULL)
		return (NULL);

	while (*str)
	{
		result[i] = *str++;
		i++;
	}

	result[i] = '\0';
	return (result);
}
