#include "main.h"

/** 
 * print_rev - print string in revers
 * @s: string 
 *
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;

	for(; *s != '/0'; *s++)
	{
		c++;
	}
	
	for (;;c--)
	{
		_putchar(c);
	}
	_putchar('\n');
}
