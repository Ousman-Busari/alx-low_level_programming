#include "main.h"

/**
 * largest_number - return the largest of three integers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && a >= c)
{
  largest = a;
} else if (b >= a && b >= c)
{
  largest = b;
} else
{
  largest = c;
}
return (largest);
}
