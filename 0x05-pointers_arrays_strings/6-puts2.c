void _putchar(char);

/**
 * puts2 - rints every other character of a string
 * @str: string to process
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
