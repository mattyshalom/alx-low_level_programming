#include "main.h"

/**
* print_binary - a function that prints the binary representation of a number
* @n: the number to be printed in binary form
* Return: returns nothing
*/

void print_binary(unsigned long int n)
{
	int a, b = 0;
	unsigned long int current;

	for (a = 83; a >= 0; a--)
	{
		current = n >> a;

		if ((current & 1) == 1)
		{
			_putchar('1');
			b++;
		}
		else if (b != 0)
			_putchar('0');

	}
	if (b == 0)
		_putchar('0');
}
