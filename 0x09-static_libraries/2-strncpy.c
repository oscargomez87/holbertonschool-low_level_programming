/**
 * _strncpy - copy string
 * @dest: destination of string
 * @src: string to copy
 * @n: number of bytes to copy from src to dest
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
		*(dest + i) = '\0';
	return (dest);
}
