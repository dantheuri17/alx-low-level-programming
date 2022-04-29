#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: number to find factorial of 
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n <= 1)
		return -1;

	return n * factorial(n - 1);
}
