#include "main.h"

/**
 * _isdigit - checks if number is a digit
 * @c: input number
 * Return: 1 if the number is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
