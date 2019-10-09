/**
 * factorial - Returns the factorial of a given number
 * @n: given number
 * Return: 1 if n is equal to 0, -1 if n is negative
 * and the factorial if n is greater than 0;
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);
}
