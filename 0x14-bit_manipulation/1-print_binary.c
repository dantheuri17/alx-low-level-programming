#include "main.h"

/**
 * print_binary - change integer into binary
 * @n: integer
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	solve(n);
}


void solve (unsigned long int n)
{
	if (n < 1) return; 

	solve(n >> 1);

	if (n & 1)
		_putchar('1');
	else 
		_putchar('0');
}
