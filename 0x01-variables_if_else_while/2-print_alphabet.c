#include <stdio.h>
#include <stdlib.h>
/**
 * Description: main - Print out a string to stdout using putchar
 * Return: 0 if successful.
 */
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++);
	{
		putchar(tolower(x));
	}
	return (0);
}
