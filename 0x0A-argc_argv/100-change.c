#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins
 * @argc: counts arguments from CL
 * @argv: stores arguments from CL into an array
 *
 * Return: number of minimum coins needed
 */

int main(int argc, char *argv[])
{
	int rem, c = 0;

	if (argc == 2)
	{
		rem = atoi(argv[1]);
		if (rem < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (rem >= 25)
		{
			c += rem /25;
			rem %= 25;
		}
		if (rem >= 10)
		{
			c += rem / 10;
			rem %= 10;
		}
		if (rem >= 5)
		{
			c += rem / 5;
			rem %= 5;
		}
		if (rem >= 2)
		{
			c += rem / 2;
			rem %= 2;
		}
		if (rem >= 1)
			c += rem / 1;
		printf("%d\n", c);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
