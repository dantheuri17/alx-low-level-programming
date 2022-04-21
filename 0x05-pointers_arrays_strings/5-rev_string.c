#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	i = 0;
	j = 0;

	while ( s[i] != '\0')
	{
		i++;
	}
	i--;
	while ( i >= 0 )
	{
		s[j] = s[i];
		j++;
		i--:
	}
}

