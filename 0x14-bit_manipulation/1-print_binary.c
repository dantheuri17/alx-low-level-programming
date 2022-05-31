#include "main.h"

/**
 * print_binary - change integer into binary
 * @n: integer 
 * Return: nothing 
 */

void print_binary(unsigned long int n)
{
	int i, mask;

	for (i = 31; i >= 0; i--)
	{
		mask = (1 << i);

		if (n & mask)
			_putchar('1');
		else 
			_putchar('0');
	}
}
