/**
 * cap_string - capitalizes all words of a string.
 * @s: string
 * Return: Capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		switch (s[i])
		{
		case 32:
		case 10:
		case 9:
		case 44:
		case 59:
		case 46:
		case 33:
		case 63:
		case 34:
		case 40:
		case 41:
		case 123:
		case 125:
			if (s[i + 1] != '\0')
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
			break;
		}
		i++;
	}
	return (s);
}
