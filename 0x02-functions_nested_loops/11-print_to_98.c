#include "main.h"

/**
 * print_to_98 - main task
 * @c: starting point
 * Return: nothing
 */
void print_to_98(int c)
{
	int a;

	if (int c <= 98)
	{
		for (a = c; a <= 98; a++)
			printf("%d", a);
	} else 
	{
		for (a = c; a >= 98; a--)
			printf("%d", a);
	}
}
