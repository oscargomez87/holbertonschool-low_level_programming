int _count(int, int);

/**
 * _sqrt_recursion - Finds natural square root of a number
 * @n: number to evaluate
 * Return: the square root if it has, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n > 10000)
                return (_count(n, n / 100));
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

	if (i > 0)
	{
		if (i * i != n)
			j = _count(n, i - 1);
		else
			return (i);
	}
	return (j);
}
