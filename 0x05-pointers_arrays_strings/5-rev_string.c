#include "main.h"

/**
 * rev_string - re-arranges strinsg in a reverse order
 * @str: the input str to teverse
 *
 * Return: nothing
 */

void rev_string(char *str)
{
	int i, j, len = 0;

	while (str[len] != '\0')
		len++;
	char str1[len];

	for (i = 0; i < len; i++)
		str1[i] = str[i];
	for (j = 0; j < len; j = len - i)
		str[j] = str1[--i];
}
