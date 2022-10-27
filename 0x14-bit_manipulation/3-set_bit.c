#include "main.h"

/**
* set_bit - a function that sets the value of a bit to 1 at a given index
* @n: the number to be operated on
* @index: the index starting from 0
* Return: returns when 1 (Success), and -1 for (error)
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	int a;

	if (index > 63)

		return (-1);

	a = 1 << index;

	*n = (*n & ~a) | (1 << a);

	return (1);

}
