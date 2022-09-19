#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int i  = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}

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
