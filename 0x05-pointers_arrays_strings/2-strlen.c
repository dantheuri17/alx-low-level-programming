#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of the a string
 * @s: pointer to address of character
 *
 * Return: int with length of the string
 */

int _strlen(char *s)
{
	int len = 0;  

	for (; *s != '\0'; *s++)
	{
		len++;
	}

	return (len);
}
