#include "main.h"
/**
 * Description: main prints to stdout.
 * Return: 0 when successful.
 */
int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]); i++;
	}
	_putchar('\n');

	return (0);
}
