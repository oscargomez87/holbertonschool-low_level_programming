int _count(int, int);

/**
 * _sqrt_recursion - Finds natural square root of a number
 * @n: number to evaluate
 * Return: 1 if the number has a square root, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n > 1000)
		return (_count(n, n / 10));
	else if (n > 100 && n < 1000)
		return (_count(n, n / 4));
	else if (n < 100)
		return (_count(n, n / 2));
	else
		return (0);
}

/**
 * _count - Finds natural square root of a number
 * @n: limit
 * @i: starting number
 * Return: 1 if the number has a square root, otherwise -1
 */
int _count(int n, int i)
{
	int j = -1;

	if (i > 2)
	{
		if (i * i != n)
			j = _count(n, i - 1);
		else
			return (i);
	}
	return (j);
}
