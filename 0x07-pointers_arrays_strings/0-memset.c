#include "main.h"

/**
<<<<<<< HEAD
 * _memset - assignsn bytes of a memory address to a certain value
=======
* _memset - assignsn bytes of a memory address to a certain value
>>>>>>> 39e1cd0fcd18abb09d4ba7deb53e42708b2fd545
 * @s:  the memoty address
 * @b: the char to assign to the specified memory space
 * @n: number bytes to assign or set
 * Return: pointer to the resulting memory address
 */

char *_memset(char *s, char b, unsigned int n)
{
  int i;

  i = 0;
  while (i < n)
    {
      s[i] = b;
      i++;
    }
  return (s);
}
