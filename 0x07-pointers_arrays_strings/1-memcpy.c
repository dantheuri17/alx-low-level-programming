#include "main.h"

/** 
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source 
 * @n: number of bytes to copy
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; 

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
