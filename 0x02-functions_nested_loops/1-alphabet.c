#include "main.h"
/**
 * Description: main - print small letter a-z
 * *Return: 0 for successful.
 */
int main(void)
{
	char r = 'a';

	while (r <= 'z')
	{
		_putchar(r); r++;
	}
	_putchar('\n');
	
	return (0);
}
