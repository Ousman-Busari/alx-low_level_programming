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

	for (d = '0'; d < '8'; d++)
	{
		int first_temp = d + 1;

		for (; first_temp <= '8'; first_temp++)
		{
			int second_temp = first_temp + 1;

			for (; second_temp <= '9'; second_temp++)
			{
				putchar(d);
				putchar(first_temp);
				putchar(second_temp);
				if (d != '7')
				{
					putchar(',');
					putchar(' ');
				};
			};
		};
	};

	putchar(' ');

	return (0);
}
