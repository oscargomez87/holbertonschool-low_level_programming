#include <stdio.h>
/*
 *
 */

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0 when successful
 */
int main(void)
{
int i, j, k, l;

for (i = 48; i < 58; i++)
{
	for (j = 48; j < 58; j++)
	{
		for (k = 48; k < 58; k++)
		{
			for (l = 48; l < 58; l++)
			{
				if ((i < k) || (i == k && j < l))
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == 57 && j == 56 && k == 57
					      && l == 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
