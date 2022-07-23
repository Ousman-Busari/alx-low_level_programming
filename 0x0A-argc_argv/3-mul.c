#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two arguements
 * @argc: ncounts number of arguments
 * @argv: store arguments in an array
 * Return: integer
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
