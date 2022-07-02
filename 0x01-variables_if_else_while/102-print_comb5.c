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
	int first_pair_1;

	for (first_pair_1 = '0'; first_pair_1 <= '9'; first_pair_1++)
	{
		int first_pair_2;

		for (first_pair_2 = '0'; first_pair_2 <= '9'; first_pair_2++)
		{
			int second_pair_1;

			if (first_pair_2 != '9')
			{
				second_pair_1 = first_pair_1;
			} else 
			{
				second_pair_1 = first_pair_1 + 1;
			};

			for (; second_pair_1 <= '9'; second_pair_1++)
			{
				int second_pair_2;

				if (first_pair_2 != '9')
				{
					second_pair_2 = first_pair_2 + 1;
				} else
				{
					second_pair_2 = '0';
				};

				for (; second_pair_2 <= '9'; second_pair_2++)
				{
					putchar(first_pair_1);
					putchar(first_pair_2);
					putchar(' ');
					putchar(second_pair_1);
					putchar(second_pair_2);
					putchar(',');
					putchar(' ');
				};
			};
		};
	};

	putchar('\n');

	return (0);
}
