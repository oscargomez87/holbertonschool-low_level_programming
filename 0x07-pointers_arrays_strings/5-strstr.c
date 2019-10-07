char *_strstr(char *haystack, char *needle)
{
	int i = 0, j= 0, k = 0;
	char *p;

	while (needle[i])
	{
		while (haystack[j])
		{
			if (needle[i] == haystack[j])
			{
				if (k == 0)
				{
					p = &haystack[j];
					break;
				}
			}
			else
			{
				i = 0;
			}
			j++;
		}
		i++;
	}
	return (p);
}
