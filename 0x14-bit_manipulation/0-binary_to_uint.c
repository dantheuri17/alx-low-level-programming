#include "main.h"

/**
 * binary_to_uint - takes binary string and turns into unsigned int
 * @b: binary string
 *
 * Return: number as unsigned integer
 */


unsigned int binary_to_uint(const char *b)
{
	int slen = 0, decval = 1, i;
	unsigned int total = 0;

	if (!b)
		return (0);

	while (b[slen])
		slen++;

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1') total += decval;
	       decval *= 2;
	}

	return (total);
}
