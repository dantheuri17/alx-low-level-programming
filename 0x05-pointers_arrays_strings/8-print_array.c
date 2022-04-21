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

	for (; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}	
