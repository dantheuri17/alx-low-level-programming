#include<stdio.h>

/**
 * main - printing base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch; 

	for (ch = '1'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
