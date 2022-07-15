#include "main.h"

/**
 * leet - enocdes string
 * @str: the tring to encode
 *
 * Return: pointer to the resulting dtring
 */

char leet(char *str)
{
	int i = 0, j;
	char sub[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     cha[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while(str[i])
	{
		for(j = 0; j < 10; j++)
		{
			if (str[i] == cha[j])
				str[i] = sub[j];
		}
		i++;
	}
	return (str);
}
