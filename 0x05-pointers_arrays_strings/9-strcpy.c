#include "main.h"

/**
 * *_strcpy - copy pointer value in src to dest
 * @*dest: pointer to destination
 * @*src: pointer to source
 *
 * Return: value of the dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);
	return (*dest, '\0');
}
