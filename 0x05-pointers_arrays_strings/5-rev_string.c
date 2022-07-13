#include "main.h"

/**
 * rev_string - re-arranges strinsg in a reverse order
 * @str: the input str to teverse
 *
 * Return: nothing
 */

void rev_string(char *str)
{
	int i = 0, len = 0;
	char temp;

	while (str[len] != '\0')
		len++;
	while (i < len--)
	{
		temp = str[i];
		str[i++] = str[len];
		str[len] = temp;
	}
}
