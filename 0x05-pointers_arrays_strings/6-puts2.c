#include "main.h"

/**
 * puts2 - prints every other character of a string starting with the first.
 * @str: string
 */

void puts2(char *str)
{
	int b;

	for (b = 0; str[b] != '\0' && b < _strlen(str); b += 2)
		_putchar(str[b]);

	_putchar('\n');
}
