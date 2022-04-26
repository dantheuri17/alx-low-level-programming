#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: first occurrence of character c or NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0, x = 0;
	char *str;

	str = 0;

	while (s[i])
	{
		if (s[i] == c)
		{ 
			x = i;
			while (s[x])
			{
				str[x] = s[x];
				x++;
			}
			return (str);

		}
		i++;
	}

	return (NULL);
}
