#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: first occurrence of character c or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			s += i;
			return s;
		}

		i++;
	}

	return ('\0');
}
