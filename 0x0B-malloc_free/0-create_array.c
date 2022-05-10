#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creating array of chars and initializing a specific character
 * @size: size of the array
 * @c: the specific character
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size);	
	str[0] = c;

	return (str);
}
