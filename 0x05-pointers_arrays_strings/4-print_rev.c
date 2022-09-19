#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: string
 * Return: returns a reverse string.
 */

void print_rev(char *s)
{
	int d = 0;

	while (*(s + d))
	{
		d++;
	}
	b-=1;
	while (d >= 0)
	{
		_putchar(*(s + d));
		d--;
	}
	_putchar('\n');
}
