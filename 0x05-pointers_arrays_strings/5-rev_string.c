#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: string to print
 */
void rev_string(char *s)
{
	int i = 0, j;
	char *start, *end, tmp;

	end = s;
	start = s;
	while (*(s + i))
		i++;
	end = end + (i - 1);
	for (j = 0; j < i / 2; j++)
	{
		tmp = *end;
		*end = *start;
		*start = tmp;
		end--;
		start++;
}
