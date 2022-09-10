#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print reverse lowercase to stdout.
 * return: 0.
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');

	return (0);
}
