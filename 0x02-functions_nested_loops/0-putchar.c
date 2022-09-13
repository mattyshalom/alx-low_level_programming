#include "main.h"
/**
 * Description: main - print to stdout.
 * Return: 0 if successful.
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');

	return (0);
}
