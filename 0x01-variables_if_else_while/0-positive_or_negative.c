#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Assigns a random number to the variable n each time it is executed
 *
 * Return: Returns 0 when succesful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i %s\n", n, "is positive");
	else if (n == 0)
		printf("%i %s\n", n, "is zero");
	else
		printf("%i %s\n", n, "is negative");
	return (0);
}
