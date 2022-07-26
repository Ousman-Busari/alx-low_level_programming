#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -  concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array storing the string
 *
 * Return: pointer to the resulting string
 */

char *argstostr(int ac, char **av)
{
	char *result;
	int i, j = 0, k = 0, len = 0, _ac = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (ac--)
	{
		i = 0;
		while (av[ac][i])
		{
			len++;
			i++;
		}
	}

	ac =_ac;
	result = malloc(sizeof(char) * (len + ac));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			result[k] = av[i][j];
			j++, k++;
		}
		result[k] = '\n';
		k++;
	}
	return (result);
}
