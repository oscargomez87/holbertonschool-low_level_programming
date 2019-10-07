/**
 * strspn - gets the length of a prefix substring.
 * @s: string to searc the segment
 * @accept: acceptable strings
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			} else
				k = 0;
		}
		if (k == 0)
			break;
	}
	return (i);
}
