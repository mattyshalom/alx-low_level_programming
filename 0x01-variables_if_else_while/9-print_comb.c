#include <stdio.h>
#include <stdlib.h>

/**
 * Description: main - to print possible combinations.
 * Return: 0 if fun successfully.
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
