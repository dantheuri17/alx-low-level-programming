#include "main.h"

/**
 * factorial - finds factorial of a number
 * @n: number to find factorial of 
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;

	return (factorial(n-1) + factorial(n-2));
}
