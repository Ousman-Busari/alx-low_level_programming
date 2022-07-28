#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of positive numbers
 * @argv: stores the positive numbers
 *
 * Return: result of the mutiplication, or 98 when exited
 */

int main(int argc, char *argv[])
{
	unsigned long mul, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%lu\n", mul);
	return (mul);
}
