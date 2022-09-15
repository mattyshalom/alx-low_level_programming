#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * main: Print sum of 3 or 5 below 1024 to stdout.
 * Description: Print the sum of all multiples of 3 or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int h = 1;
	int total = 0;

	while (h < 1024)
	{
		if (h % 3 == 0)
			total += h;
		else if (h % 5 == 0)
			total += h;

		h++;
	}
	printf("%d\n", total);

	return (0);
}
