/**
 * _memcpy - copies memory area.
 * @src: source to copy from.
 * @dest: copy destination.
 * @n: number of bytes to copy.
 * Return: pointer memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
