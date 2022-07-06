#include <stdio.h>
#include "main.h"

/**
 * main -the process
 *
 * Return: nothing
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (sum);
}
