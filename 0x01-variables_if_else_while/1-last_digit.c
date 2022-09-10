#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * A program to assign random number to variable, print string to stdout
 * Return: 0 if sucessfull.
 */
int main(void)
{
	int n;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 5 )
		printf("%s %d is %d and is grater than 5\n", str, n);
	else if ( n == 0 )
		printf( "%s %d is %d and is 0\n", str, n);
	else if ( n < 6 )
		printf("%s %d is %d and is less than 6 and not 0\n", str, n);
	
	return (0);
}
