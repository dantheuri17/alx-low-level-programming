#include "main.h"

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
		for (i = c / 2; i < c; i++)
		{
			_putchar(str[c]);
		}
	}
	else
	{
		for(i = (c-1) / 2; i < c; i++)
		{
			_putchar(str[c]);
		}
	}
}
