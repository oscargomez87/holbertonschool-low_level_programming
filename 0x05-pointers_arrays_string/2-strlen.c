/**
 * _strlen - Returns the length of a string
 * @s: pointer to char array
 * Return: size of array
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != 0; i++)
	{}
	printf("%d\n", i);
	return (i);
}
