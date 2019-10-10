int _count(char *);
int check(char *, int, int);

/**
 * is_palindrome - bridge function that checks if string is a palindrome
 * @s: string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int i;

	i = _count(s);
	return (check(s, i - 1, 0));
}

/**
 *  _count - counts the size of the string
 * @s: string to count
 * Return: size of string
 */
int _count(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _count(s + 1));
}

/**
 * check - checks if the string is palindrime
 * @s: checks if string is palindrome
 * @i: end of string
 * @j: star of string
 * Return: 1 if string is palindrome, 0 otherwise
 */
int check(char *s, int i, int j)
{
	int k = 1;

	if (i > j)
	{
		if (s[i] == s[j])
		{
			k = check(s, i - 1, j + 1);
		} else
			return (0);
	}
	return (k);
}
