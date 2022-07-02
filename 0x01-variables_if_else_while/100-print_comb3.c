#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	for (d = '0'; d < '9'; d++)
	{
		int temp;
		for (temp = d + 1; temp <= '9'; temp++)
		{
			putchar(d);
			putchar(temp);
			putchar(',');
			putchar(' ');
		};
	};

	putchar('\n');

	return (0);
}
