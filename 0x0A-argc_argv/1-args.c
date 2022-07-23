#include <stdio.h>

/**
 * main - prints number of arguments
 * @argc: arguments counter
 * @argv: array of arguemts value
 * Return: integer
 */

int main(int argc, char *argv[])
{
	char *s = argv[0];

	if (s)
		printf("%d\n", argc - 1);
	return (0);
}
