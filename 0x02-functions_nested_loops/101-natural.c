#include <stdio.h>
#include "main.h"

/**
 * main -the process
 *
 * Return: sum of numbers
 */

int main(void)
{
	int i, sum;

	for (i = 0; i < 1024; i++)
	{
		sum = 0;
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
}
