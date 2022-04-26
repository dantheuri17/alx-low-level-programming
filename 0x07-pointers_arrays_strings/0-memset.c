#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @n: number of bytes to fill
 * @s: pointer to memory area
 * @b: constant byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0; 

	while (i < n && b[i])
	{
		s[i] = b[i]; i++;
	}

	return (s);
}
