#include "main.h"

/**
 * _strlen - To returns the lenght of a string.
 * @s: the string.
 * retun: the string lenth.
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
