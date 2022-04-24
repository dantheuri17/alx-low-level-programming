#include "main.h"

/** 
 * _strcat: concatenates strings
 * @dest: destination string being appended to
 * @src: appending to dest
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int c, x, i, n, z;
	c = 0;
	x = 0;

	while (dest[c] != '\0')
		c++;

	while (src[x] != '\0')
		x++;

	c--;
	n = x + c; 
	z = 0;

	for (i = c; i < n; i++)
	{
		dest[i] = src[z];
		z++;
	}

	return dest;
}
