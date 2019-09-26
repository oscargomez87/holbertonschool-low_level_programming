#include <stdio.h>

/**
 *
 *
 */
int main(void)
{
	int i, n1, n2;

	for (i = 1; i <= 100; i++)
	{
		n1 = i /3;
		n2 = i /5;
		if (((n1 * 3) == i) && ! ((n2 * 5) == i))
			printf("Fizz ");
		else if ((n2 * 5) == i && !((n1 * 3) == i))
			printf("Buzz ");
		else if (((n1 * 3) == i) && ((n2 * 5) == i))
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("/n");
	return (0);
}
