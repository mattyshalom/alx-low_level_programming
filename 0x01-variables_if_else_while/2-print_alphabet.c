#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print out a string to stdout using putchar
 * Return: 0 if successful.
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	printf("\n");

	return (0);
}
