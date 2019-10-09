int _count(int, int);

/**
 * is_prime_number - Finds if a number is a prime number
 * @n: number to evaluate
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (_count(n, 2));
}

/**
 * _count - manages counter.
 * @n: number to evaluate
 * @i: counter
 * Return: 1 if n % i is different from 0, otherwise 0
 */
int _count(int n, int i)
{
	int j = 0;

	if (i == n)
		return (1);
	if (i < n)
	{
		if (n % i != 0)
		{
			j = _count(n, i + 1);
		}
	}
	return (j);
}
