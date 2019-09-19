#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - assign a random number to the variable n each time it is executed,
 * evaluate if n is greater than 5, 0 or less than 6 and print a message.
 *
 * Return: o when succesful
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
		printf("%s %i %s %i %s\n", "Last digit of", n, "is", last,
		       "and is greater than 5");
	else if (last == 0)
		printf("%s %i %s %i %s\n", "Last digit of", n, "is", last,
		       "and is 0");
	else
		printf("%s %i %s %i %s\n", "Last digit of", n, "is", last,
		       "and is less than 6 and not 0");
	return (0);
}
