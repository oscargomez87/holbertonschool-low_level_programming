/**
 * leet - encodes a string into 1337.
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char c[] = "ol2ea56t";

	while (s[i])
	{
		j = 0;
		while (c[j])
		{
			if (s[i] == c[j] || s[i] == (c[j] - 32))
			{
				s[i] = (j + '0');
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
