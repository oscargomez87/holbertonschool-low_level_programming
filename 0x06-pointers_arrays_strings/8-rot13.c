/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;
	char c1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char c2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i])
	{
		j = 0;
		while (c1[j])
		{
			if (s[i] == c1[j])
			{
				s[i] = c2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
