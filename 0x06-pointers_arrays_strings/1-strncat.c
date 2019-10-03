/**
 * _strncat - Concatenates 2 strings a n number of bytes
 * @dest: Concatenated string destination
 * @src: string source
 * @n: number of bytes to concatenate
 * Return: pointer to resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (*(dest + i))
	{
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}
