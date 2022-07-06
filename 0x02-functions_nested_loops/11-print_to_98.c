#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - main task
 * @s: starting point
 *
 * Return: nothing
 */

void print_to_98(int s)
{
	if (s <= 98)
	{
		for (; s <= 98; s++)
		{
			printf("%d", s);
			if (s == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}else
	{
		for (; s >= 98; s--)
		{
			printf("%d", s);
			if (s != 98)
				printf(", ");
		}
		printf("\n");
	}
}

