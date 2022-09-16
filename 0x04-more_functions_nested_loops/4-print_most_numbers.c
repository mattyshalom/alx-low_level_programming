#include "main.h"

/**
 * print_most_numbers: prints numbers between 0 to 9 except 2 and 4
 * Return: 0 if successful.
 */
void print_most_numbers(void)
{
	char ch;

	for (ch = 0; ch < 10; ch++)
	{
		if ((ch == 2) || (ch == 4))
		{
			continue;
		}
		_putchar('0' + ch);
	}
	_putchar('\n');
}
