#include <stdio.h>
void factor(int n);
void primen(int n);

int main(void){
int j, p = 0;
long i, num = 612852475143;

int n1 = num / 1000000;
int n2 = num % 1000000;

printf("%d %d\n", n1, n2);

factor(n1);

factor(n2);

/*for (i = 2; i <= num; ++i)
{
	p = 0;
	if (num % i == 0)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				p++;
			}
		}
		if (p == 2)
		{
			printf ("Entered number is %ld "
				"and it is a prime number.\n", i);
		}
		else
		{
			printf ("Entered number is %ld "
				"and it is not a prime number.\n", i);
		}
	}
	}*/
}

int factor(int n)
{
	int i;

        for(i = n; i > (n / 2); i--)
	{
		if (n%i == 0)
		{
			primen(i);
		}
	}
	return (
}

int primen(int n)
{
	int i, j = 0, p = 0;

	for(i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			p++;
		}
	}
	if(p==2)
	{
		if (j < i)
			j = i;
	}
	return (i);
}
