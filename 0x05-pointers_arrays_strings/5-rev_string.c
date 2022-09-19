#include "main.h"

/**
 * _strlen - returns the lenght of a string.
 * @s: string
 * return: lenght.
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (1);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char rdc;

	while (i < j)
	{
		rdc = s[i];
		s[i] = s[j];
		s[j] = rdc;
		i++, j--;
	}
}
