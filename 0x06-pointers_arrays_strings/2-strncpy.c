#include "main.h"

/**
 * _strncpy - copy the string
 * @dest: string
 * @src: string
 * @n: number of times being copies
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, c;

	while (i < n)
	{
		c = 0;
		while (src[c])
		{
			dest[c] = src[c];
			c++;
		}
		_putchar('\n');
		i++;
	}

	return (dest);
}
