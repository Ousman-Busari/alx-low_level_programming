#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of positive numbers
 * @argv: stores the positive numbers
 *
 * Return: Always Success 0
 */

int main(int argc, char *argv[])
{
	unsigned long int mul, num1, num2;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

/*	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (0);
}
