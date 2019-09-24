int _putchar(char c);

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 1 on success, -1 on error
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
	return (1);
}
