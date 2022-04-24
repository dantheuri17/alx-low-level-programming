#include "main.h"

/**
 * _strncat - concatenate 2 strings with certain number of
 * @src: string concatenating
 * @dest: string being concatenated
 * @n: number of values
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; i < n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
