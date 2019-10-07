/**
 * _strchr - locates a character in a string.
 * @s: string to search in.
 * @c: char to locate.
 * Return: pointer to the character or null if its not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	while (s[i])
	{
		if  (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);
}
