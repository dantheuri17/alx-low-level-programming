#include "main.h"

/**
 * puts_half - print second half of string
 * @str: the string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	if ((c / 2) % 2 == 0)
	{
		for (i = (c / 2) + 1; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (c - 1) / 2; i < c; i++)
		{
			_putchar(str[i]);
		}
	}
}
