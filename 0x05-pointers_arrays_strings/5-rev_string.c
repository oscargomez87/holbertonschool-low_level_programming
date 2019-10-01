/**
 * rev_string - prints a string in reverse
 * @s: string to print
 */
void rev_string(char *s)
{
	int i = 0, j;
	char tmp[10];

	while (*(s + i))
		i++;
	for (; i > 0; i--)
		tmp[9 - i] = (*(s + (i - 1)));
	for (j = 0; j < 10; j++)
		*s = *tmp;
}
