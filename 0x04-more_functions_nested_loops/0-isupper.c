#include "main.h"

/**
 * _isuppercase - checks whether a letter is uppercase
 *
 * Return: 1 if it is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c<= 90)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
