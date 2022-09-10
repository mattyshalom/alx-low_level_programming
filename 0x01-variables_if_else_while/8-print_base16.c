#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - to print number base16.
 * Return: 0 if run successful.
 */
int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
