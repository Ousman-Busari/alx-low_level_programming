#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: counts number of arguments
 * @argv: stores arguments into array
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int add = 0, i, val;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		val = atoi(argv[i]);
		add += val;
	}
	printf("%d\n", add);
	return (0);
}
