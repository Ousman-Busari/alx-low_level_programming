#include <stdio.h>

int main(void)
{
  int arr_2d[5][4];
  int i, j;

  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 4; j++)
	{
	  printf("Enter the value for arr_2d[%d][%d]: ", i, j);
	  scanf("%d", &arr_2d[i][j]);
	}
    }

  printf("Printing out the element of the 2d array\n");
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 4; j++)
	{
	  printf("%02d, ", arr_2d[i][j]);
	  if (j == 3)
	    printf("\n");
	}
    }

  return (0);
}
