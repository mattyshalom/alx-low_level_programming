#include "main.h"

/**
 * swap_int - To swaps the values of two integers.
 * @a: first int
 * @b: secound int
 * return: 0 if successful.
 */

void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
