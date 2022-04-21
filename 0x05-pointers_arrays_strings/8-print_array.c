#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of integers
 * @a: the string
 * @n: how many elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d", a[n-1]);
	_putchar('\n');
}
