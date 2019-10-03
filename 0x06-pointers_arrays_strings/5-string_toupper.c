/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to change from lower to uppercase
 * Return: string changed to uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] >= 'b')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
