#include <stdio.h>

/**
 * main - prints arguments
 * @argc: counts number of arguments
 * @argv: stores arguemts in an array
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
