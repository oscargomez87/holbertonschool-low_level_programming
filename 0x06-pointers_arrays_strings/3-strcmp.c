/**
 * _strcmp - compare strings
 * @s1: main string to compare
 * @s2: string to compare with s1
 * Return: 15 if s1 is greater than s2, -15 if s1 is less than s1 and 0 if s1
 * matches s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, n;

	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (i == j)
		n = 0;
	else if (i > j)
		n = 15;
	else
		n = -15;
	return (n);
}
