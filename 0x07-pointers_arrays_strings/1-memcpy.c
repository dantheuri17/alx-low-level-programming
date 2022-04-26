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

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}