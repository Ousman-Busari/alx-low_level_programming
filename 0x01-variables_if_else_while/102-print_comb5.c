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
			int second_pair_1, temp_2nd;

			if (first_pair_2 == '9')
				temp_2nd = first_pair_1 + 1;
			else
				temp_2nd = first_pair_1;
			for (second_pair_1 = temp_2nd; second_pair_1 <= '9'; second_pair_1++)
			{
				int second_pair_2, temp_2nd_2nd;

				if (first_pair_2 == '9')
					temp_2nd_2nd = '0';
				else if (first_pair_1 == '0' && second_pair_1 > '0')
					temp_2nd_2nd = '0';
				else if (first_pair_1 > '0' && first_pair_2 == '0')
					temp_2nd_2nd = '0';
				else
					temp_2nd_2nd = first_pair_2 + 1;
				for (second_pair_2 = temp_2nd_2nd; second_pair_2 <= '9'; second_pair_2++)
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
