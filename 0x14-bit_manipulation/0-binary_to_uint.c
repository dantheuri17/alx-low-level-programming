#include "main.h"

/**
 * _strlen - finds the length of a string
 *
 * @s: string 
 * @Return: length of the string
 */

int _strlen(const char *s)
{
	int c = 0;
	while (s[c]) c++;
	return(c);
}

/** 
 * binary_to_uint - takes binary string and turns into unsigned int
 * @b: binary string
 *
 * Return: number as unsigned integer
 */


unsigned int binary_to_uint(const char *b)
{
	int slen = _strlen(b), total = 0, decval = 1, i;

	if (!b)
		return (0);

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1') total += decval;
	       decval *= 2;
	}

	return (total);
}
