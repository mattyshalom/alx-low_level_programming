#include "main.h"

/**
 * print_line - Draw a starigh line using the character _
 * @n: the number of _ characher to be printed.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');
}
