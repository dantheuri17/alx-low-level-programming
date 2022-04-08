#include<stdio.h>

/**
 * main - print digits with commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
