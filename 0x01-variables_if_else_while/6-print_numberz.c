#include<stdio.h>

/**
 * main - print numbers 0-9
 * using putchar and no char
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i<10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
