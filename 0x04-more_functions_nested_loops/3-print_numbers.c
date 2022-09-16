#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9.
 * Description: print and followed by a new line
 * Return: 0 when successful
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
