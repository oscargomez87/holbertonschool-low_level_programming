/**
 * _strlen_recursion - Returns the length of a string
 * @s: string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	static int i;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	return (i);
}
