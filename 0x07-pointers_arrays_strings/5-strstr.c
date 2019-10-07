/**
 * _strstr - locates a substring.
 * @haystack: string to search in
 * @needle: string to search
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	char *p = '\0';

	while (needle[i])
	{
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				if (p == '\0')
				{
					p = &haystack[j];
					break;
				}
			}
			j++;
		}
		i++;
	}
	return (p);
}
