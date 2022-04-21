#include "main.h"

/**
 * _strlen - returns length of the a string
 * @s: pointer to address of character
 *
 * Return: int with length of the string
 */

int _strlen(char *s)
{
	int len; 

	len = strlen(*s);
	return (len);
}
