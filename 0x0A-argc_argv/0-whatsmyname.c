#include <stdio.h>
#include "main.h"

/**
 * main - prints out the name of the program
 * @argc: the number of arguments
 * @argv: array of string containing the command line arguments
 * Return: integer
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
