#include "main.h"

/** 
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source 
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; 

	while (src[i] && i < n)
	{
		dest[i] = src[i];
	}

	return (dest);
}
