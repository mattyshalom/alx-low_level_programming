#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: the string.
 * Retun: the lenth of a string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);
}
